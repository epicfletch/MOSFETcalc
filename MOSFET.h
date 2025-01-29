#ifndef MOSFET_H
#define MOSFET_H

typedef struct {
    bool Type;            /* 0 for N-Channel, 1 for P-Channel */
    double Vgs;           /* Gate-Source Voltage (V) */
    double Vds;           /* Drain-Source Voltage (V) */
    double Id;            /* Drain Current (A) */
    double Rds_on;        /* On-state resistance (ohms) */
    double threshold;     /* Threshold Voltage (Vth) (V) */
    double power;         /* Maximum power dissipation (W) */
    double gateCharge;    /* Total gate charge of MOSFET (nC) */
} MOSFET;

#endif // MOSFET_H
