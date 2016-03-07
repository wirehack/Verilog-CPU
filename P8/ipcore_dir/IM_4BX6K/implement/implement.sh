
 
 
 




#!/bin/sh

# Clean up the results directory
rm -rf results
mkdir results

#Synthesize the Wrapper Files

echo 'Synthesizing example design with Synplify'
synplify_pro -batch synplify.prj -licensetype synplifypro_xilinx


# Copy the netlist generated by Coregen
echo 'Copying files from the netlist directory to the results directory'
cp ../../IM_4BX6K.ngc results/

#  Copy the constraints files generated by Coregen
echo 'Copying files from constraints directory to results directory'
cp ../example_design/IM_4BX6K_exdes.ucf results/

cd results

echo 'Running ngdbuild'
ngdbuild -p xc6slx150-fgg676-2 IM_4BX6K_exdes

echo 'Running map'
map IM_4BX6K_exdes -o mapped.ncd -pr i

echo 'Running par'
par mapped.ncd routed.ncd

echo 'Running trce'
trce -e 10 routed.ncd mapped.pcf -o routed

echo 'Running design through bitgen'
bitgen -w routed

echo 'Running netgen to create gate level Verilog model'
netgen -ofmt verilog -sim -tm IM_4BX6K_exdes -pcf mapped.pcf -w -sdf_anno false routed.ncd routed.v