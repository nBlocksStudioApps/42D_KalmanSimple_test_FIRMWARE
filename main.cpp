
/* ================================================================ *
 *          Automatically generated by n-Blocks Studio 2.0          *
 *                                                                  *
 *                         www.n-blocks.net                         *
 * ================================================================ */
#include "nlib\nblocks.h"
// #include "nlib\BSP\bsp.h"
// Custom nodes:
#include "nlib\KernelFramePulse\kernelframepulse.h"
#include "nlib\Ticker\ticker.h"
#include "nlib\ADC\adc.h"
#include "nlib\KalmanSimple\KalmanSimple.h"
#include "nlib\SignalMixer\signalmixer.h"
#include "nlib\NoiseSource\noisesource.h"
#include "nlib\StringSerial\stringserial.h"
#include "nlib\StringFormat\stringformat.h"

// -*-*- List of node objects -*-*-
nBlock_KernelFramePulse      nb_nBlockNode1_KernelFramePulse (LED4);
nBlock_Ticker                nb_nBlockNode2_Ticker           (200);
nBlock_ADC                   nb_nBlockNode3_ADC              (p20, OUTPUT_TYPE_FLOAT);
nBlock_KalmanSimple          nb_nBlockNode4_KalmanSimple     (2.0, 2.0, 0.01);
nBlock_SignalMixer           nb_nBlockNode5_SignalMixer      (1, 1, 0, 0);
nBlock_NoiseSource           nb_nBlockNode6_NoiseSource      (0.0, 1.0, 8);
nBlock_StringSerial          nb_nBlockNode7_StringSerial     (USBTX, USBRX);
nBlock_StringFormat          nb_nBlockNode8_StringFormat     ("ADC estimation = %f \r\n");

// -*-*- List of connection objects -*-*-
nBlockConnection    n_conn0( &nb_nBlockNode8_StringFormat,     0,    &nb_nBlockNode7_StringSerial,     0);
nBlockConnection    n_conn1( &nb_nBlockNode6_NoiseSource,      0,    &nb_nBlockNode5_SignalMixer,      1);
nBlockConnection    n_conn2( &nb_nBlockNode4_KalmanSimple,     0,    &nb_nBlockNode8_StringFormat,     0);
nBlockConnection    n_conn3( &nb_nBlockNode5_SignalMixer,      0,    &nb_nBlockNode4_KalmanSimple,     0);
nBlockConnection    n_conn4( &nb_nBlockNode3_ADC,              0,    &nb_nBlockNode5_SignalMixer,      0);
nBlockConnection    n_conn5( &nb_nBlockNode2_Ticker,           0,    &nb_nBlockNode3_ADC,              0);
nBlockConnection    n_conn6( &nb_nBlockNode2_Ticker,           0,    &nb_nBlockNode6_NoiseSource,      0);


// -*-*- Main function -*-*-
int main(void) {
    SetupWorkbench();
    while(1) {
        ProgressNodes();
        
        // Your custom code here!
    }
}
