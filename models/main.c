#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

#define VERSION 2
#define BUFFER_SIZE 1886

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} H45bDU1b_ctx_t;

void init_ctx(H45bDU1b_ctx_t *ctx) {
    ctx->id = 4937;
    ctx->coefficient = 6.8;
    ctx->flags = 240;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} XDe2bXS3_ctx_t;

void init_ctx(XDe2bXS3_ctx_t *ctx) {
    ctx->id = 4113;
    ctx->coefficient = 8.0;
    ctx->flags = 195;
}

int compute_mDtoADd(int input) {
    int result = input * 57;
    for(int i = 0; i < 8; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} mACeeLC2_ctx_t;

void init_ctx(mACeeLC2_ctx_t *ctx) {
    ctx->id = 1257;
    ctx->coefficient = 3.0;
    ctx->flags = 58;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} IyZYYCpa_ctx_t;

void init_ctx(IyZYYCpa_ctx_t *ctx) {
    ctx->id = 2535;
    ctx->coefficient = 5.5;
    ctx->flags = 223;
}

int compute_iieFauV(int input) {
    int result = input * 55;
    for(int i = 0; i < 3; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} vvTzBGbx_ctx_t;

void init_ctx(vvTzBGbx_ctx_t *ctx) {
    ctx->id = 8886;
    ctx->coefficient = 3.2;
    ctx->flags = 81;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} uFHO5KXR_ctx_t;

void init_ctx(uFHO5KXR_ctx_t *ctx) {
    ctx->id = 1026;
    ctx->coefficient = 5.5;
    ctx->flags = 220;
}

int compute_JGi4Q55(int input) {
    int result = input * 39;
    for(int i = 0; i < 3; i++) result += (i * 1);
    return result;
}

int compute_2PhlVdW(int input) {
    int result = input * 68;
    for(int i = 0; i < 15; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} 2SpqAqOH_ctx_t;

void init_ctx(2SpqAqOH_ctx_t *ctx) {
    ctx->id = 9307;
    ctx->coefficient = 6.6;
    ctx->flags = 161;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} nnwY0S3v_ctx_t;

void init_ctx(nnwY0S3v_ctx_t *ctx) {
    ctx->id = 1105;
    ctx->coefficient = 7.1;
    ctx->flags = 146;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} FpwMsEbg_ctx_t;

void init_ctx(FpwMsEbg_ctx_t *ctx) {
    ctx->id = 2381;
    ctx->coefficient = 2.8;
    ctx->flags = 138;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} RUWL5EPO_ctx_t;

void init_ctx(RUWL5EPO_ctx_t *ctx) {
    ctx->id = 8230;
    ctx->coefficient = 6.9;
    ctx->flags = 237;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} QoSAGf4b_ctx_t;

void init_ctx(QoSAGf4b_ctx_t *ctx) {
    ctx->id = 6599;
    ctx->coefficient = 4.2;
    ctx->flags = 215;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} KD2p6ZQW_ctx_t;

void init_ctx(KD2p6ZQW_ctx_t *ctx) {
    ctx->id = 2716;
    ctx->coefficient = 2.8;
    ctx->flags = 133;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} O72YIS8T_ctx_t;

void init_ctx(O72YIS8T_ctx_t *ctx) {
    ctx->id = 7128;
    ctx->coefficient = 1.2;
    ctx->flags = 149;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} 6Eyisjb7_ctx_t;

void init_ctx(6Eyisjb7_ctx_t *ctx) {
    ctx->id = 7331;
    ctx->coefficient = 7.3;
    ctx->flags = 227;
}

int compute_opwBcmw(int input) {
    int result = input * 59;
    for(int i = 0; i < 12; i++) result += (i * 5);
    return result;
}

int compute_BfPU58W(int input) {
    int result = input * 2;
    for(int i = 0; i < 5; i++) result += (i * 5);
    return result;
}

int compute_LsJUeWw(int input) {
    int result = input * 10;
    for(int i = 0; i < 6; i++) result += (i * 5);
    return result;
}

int compute_QlJlaHR(int input) {
    int result = input * 3;
    for(int i = 0; i < 17; i++) result += (i * 3);
    return result;
}

int compute_okBTWnU(int input) {
    int result = input * 58;
    for(int i = 0; i < 14; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} MIEJmB2l_ctx_t;

void init_ctx(MIEJmB2l_ctx_t *ctx) {
    ctx->id = 4013;
    ctx->coefficient = 2.9;
    ctx->flags = 24;
}

int compute_Nkx1FC2(int input) {
    int result = input * 33;
    for(int i = 0; i < 17; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} I00s6wPO_ctx_t;

void init_ctx(I00s6wPO_ctx_t *ctx) {
    ctx->id = 2502;
    ctx->coefficient = 3.0;
    ctx->flags = 84;
}

int compute_4O5qBO1(int input) {
    int result = input * 44;
    for(int i = 0; i < 7; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} 8BGUZVoH_ctx_t;

void init_ctx(8BGUZVoH_ctx_t *ctx) {
    ctx->id = 1806;
    ctx->coefficient = 8.8;
    ctx->flags = 192;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} JXC3Mn7A_ctx_t;

void init_ctx(JXC3Mn7A_ctx_t *ctx) {
    ctx->id = 5870;
    ctx->coefficient = 7.9;
    ctx->flags = 241;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} wgSsHdYQ_ctx_t;

void init_ctx(wgSsHdYQ_ctx_t *ctx) {
    ctx->id = 9100;
    ctx->coefficient = 4.3;
    ctx->flags = 188;
}

int compute_cPlqzxS(int input) {
    int result = input * 21;
    for(int i = 0; i < 11; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} byEbnj1k_ctx_t;

void init_ctx(byEbnj1k_ctx_t *ctx) {
    ctx->id = 1605;
    ctx->coefficient = 6.8;
    ctx->flags = 113;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} nle41od5_ctx_t;

void init_ctx(nle41od5_ctx_t *ctx) {
    ctx->id = 1566;
    ctx->coefficient = 1.2;
    ctx->flags = 152;
}

int compute_ZOXbONi(int input) {
    int result = input * 28;
    for(int i = 0; i < 3; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} O6ugl8rI_ctx_t;

void init_ctx(O6ugl8rI_ctx_t *ctx) {
    ctx->id = 9273;
    ctx->coefficient = 2.4;
    ctx->flags = 101;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} 29phRx5e_ctx_t;

void init_ctx(29phRx5e_ctx_t *ctx) {
    ctx->id = 3759;
    ctx->coefficient = 9.7;
    ctx->flags = 196;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} TjKmtHOQ_ctx_t;

void init_ctx(TjKmtHOQ_ctx_t *ctx) {
    ctx->id = 1447;
    ctx->coefficient = 6.3;
    ctx->flags = 212;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} d8v07V4g_ctx_t;

void init_ctx(d8v07V4g_ctx_t *ctx) {
    ctx->id = 1467;
    ctx->coefficient = 0.3;
    ctx->flags = 163;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} hrLWDl2Y_ctx_t;

void init_ctx(hrLWDl2Y_ctx_t *ctx) {
    ctx->id = 9753;
    ctx->coefficient = 8.2;
    ctx->flags = 2;
}

int compute_b2l9XD0(int input) {
    int result = input * 26;
    for(int i = 0; i < 14; i++) result += (i * 4);
    return result;
}

int compute_GTniTxZ(int input) {
    int result = input * 3;
    for(int i = 0; i < 9; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} ad8IY6fi_ctx_t;

void init_ctx(ad8IY6fi_ctx_t *ctx) {
    ctx->id = 8219;
    ctx->coefficient = 2.2;
    ctx->flags = 37;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} 1V3biX7D_ctx_t;

void init_ctx(1V3biX7D_ctx_t *ctx) {
    ctx->id = 1007;
    ctx->coefficient = 4.5;
    ctx->flags = 159;
}

int compute_FuL6PM7(int input) {
    int result = input * 33;
    for(int i = 0; i < 6; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} wTunhC8w_ctx_t;

void init_ctx(wTunhC8w_ctx_t *ctx) {
    ctx->id = 8807;
    ctx->coefficient = 9.3;
    ctx->flags = 210;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} mmI4Eq97_ctx_t;

void init_ctx(mmI4Eq97_ctx_t *ctx) {
    ctx->id = 7019;
    ctx->coefficient = 0.6;
    ctx->flags = 25;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} Y4KEXwF0_ctx_t;

void init_ctx(Y4KEXwF0_ctx_t *ctx) {
    ctx->id = 1827;
    ctx->coefficient = 5.8;
    ctx->flags = 251;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} wt6SFkZy_ctx_t;

void init_ctx(wt6SFkZy_ctx_t *ctx) {
    ctx->id = 7357;
    ctx->coefficient = 9.5;
    ctx->flags = 89;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} tBuBaKky_ctx_t;

void init_ctx(tBuBaKky_ctx_t *ctx) {
    ctx->id = 2741;
    ctx->coefficient = 6.2;
    ctx->flags = 182;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} u77EQDQB_ctx_t;

void init_ctx(u77EQDQB_ctx_t *ctx) {
    ctx->id = 2802;
    ctx->coefficient = 8.0;
    ctx->flags = 93;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} cZbuW1bW_ctx_t;

void init_ctx(cZbuW1bW_ctx_t *ctx) {
    ctx->id = 9876;
    ctx->coefficient = 9.4;
    ctx->flags = 163;
}

int compute_wH5AQzo(int input) {
    int result = input * 4;
    for(int i = 0; i < 6; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} Kz7YmJCX_ctx_t;

void init_ctx(Kz7YmJCX_ctx_t *ctx) {
    ctx->id = 6872;
    ctx->coefficient = 10.0;
    ctx->flags = 244;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} S6dOF1dV_ctx_t;

void init_ctx(S6dOF1dV_ctx_t *ctx) {
    ctx->id = 6808;
    ctx->coefficient = 6.7;
    ctx->flags = 201;
}

int compute_v35pNYd(int input) {
    int result = input * 32;
    for(int i = 0; i < 3; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} oWPlTKKJ_ctx_t;

void init_ctx(oWPlTKKJ_ctx_t *ctx) {
    ctx->id = 6284;
    ctx->coefficient = 1.3;
    ctx->flags = 63;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} 2C83ZmBB_ctx_t;

void init_ctx(2C83ZmBB_ctx_t *ctx) {
    ctx->id = 6947;
    ctx->coefficient = 8.6;
    ctx->flags = 226;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} YIIQShAf_ctx_t;

void init_ctx(YIIQShAf_ctx_t *ctx) {
    ctx->id = 8045;
    ctx->coefficient = 4.9;
    ctx->flags = 134;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} CKCYKT13_ctx_t;

void init_ctx(CKCYKT13_ctx_t *ctx) {
    ctx->id = 1174;
    ctx->coefficient = 8.1;
    ctx->flags = 154;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} SnxGJg3N_ctx_t;

void init_ctx(SnxGJg3N_ctx_t *ctx) {
    ctx->id = 9847;
    ctx->coefficient = 5.8;
    ctx->flags = 98;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} 9HC5ebwc_ctx_t;

void init_ctx(9HC5ebwc_ctx_t *ctx) {
    ctx->id = 4887;
    ctx->coefficient = 9.3;
    ctx->flags = 208;
}

int compute_B9N02LH(int input) {
    int result = input * 46;
    for(int i = 0; i < 15; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} TzKi9Uq6_ctx_t;

void init_ctx(TzKi9Uq6_ctx_t *ctx) {
    ctx->id = 8587;
    ctx->coefficient = 5.8;
    ctx->flags = 24;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} ul2WZi0V_ctx_t;

void init_ctx(ul2WZi0V_ctx_t *ctx) {
    ctx->id = 7538;
    ctx->coefficient = 5.7;
    ctx->flags = 49;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} 3yc9BTwm_ctx_t;

void init_ctx(3yc9BTwm_ctx_t *ctx) {
    ctx->id = 2683;
    ctx->coefficient = 4.3;
    ctx->flags = 44;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} 6qfGi7QQ_ctx_t;

void init_ctx(6qfGi7QQ_ctx_t *ctx) {
    ctx->id = 5725;
    ctx->coefficient = 2.5;
    ctx->flags = 83;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} 4AwdrLzW_ctx_t;

void init_ctx(4AwdrLzW_ctx_t *ctx) {
    ctx->id = 3170;
    ctx->coefficient = 8.8;
    ctx->flags = 64;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} AAazaYBP_ctx_t;

void init_ctx(AAazaYBP_ctx_t *ctx) {
    ctx->id = 2443;
    ctx->coefficient = 2.0;
    ctx->flags = 202;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} 8Wloz1zz_ctx_t;

void init_ctx(8Wloz1zz_ctx_t *ctx) {
    ctx->id = 4349;
    ctx->coefficient = 3.0;
    ctx->flags = 228;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} 2Q2AYbc3_ctx_t;

void init_ctx(2Q2AYbc3_ctx_t *ctx) {
    ctx->id = 9083;
    ctx->coefficient = 5.4;
    ctx->flags = 255;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} gXackVKu_ctx_t;

void init_ctx(gXackVKu_ctx_t *ctx) {
    ctx->id = 7638;
    ctx->coefficient = 0.9;
    ctx->flags = 146;
}

int compute_5TG9f3R(int input) {
    int result = input * 54;
    for(int i = 0; i < 9; i++) result += (i * 3);
    return result;
}

int compute_rAM70uL(int input) {
    int result = input * 51;
    for(int i = 0; i < 3; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} irq8mEN8_ctx_t;

void init_ctx(irq8mEN8_ctx_t *ctx) {
    ctx->id = 8389;
    ctx->coefficient = 2.6;
    ctx->flags = 203;
}

int compute_zyrZ9f7(int input) {
    int result = input * 34;
    for(int i = 0; i < 8; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} VuMLxOkD_ctx_t;

void init_ctx(VuMLxOkD_ctx_t *ctx) {
    ctx->id = 3961;
    ctx->coefficient = 0.8;
    ctx->flags = 3;
}

int compute_kcxqO2f(int input) {
    int result = input * 59;
    for(int i = 0; i < 11; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} xWIt3xJK_ctx_t;

void init_ctx(xWIt3xJK_ctx_t *ctx) {
    ctx->id = 8148;
    ctx->coefficient = 6.9;
    ctx->flags = 20;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} q10Cs3wF_ctx_t;

void init_ctx(q10Cs3wF_ctx_t *ctx) {
    ctx->id = 5707;
    ctx->coefficient = 5.2;
    ctx->flags = 221;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} VFeuk1h1_ctx_t;

void init_ctx(VFeuk1h1_ctx_t *ctx) {
    ctx->id = 3696;
    ctx->coefficient = 3.6;
    ctx->flags = 252;
}

int compute_nrs6q5H(int input) {
    int result = input * 64;
    for(int i = 0; i < 3; i++) result += (i * 1);
    return result;
}

int compute_57O0ono(int input) {
    int result = input * 29;
    for(int i = 0; i < 8; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} n9uHdKS0_ctx_t;

void init_ctx(n9uHdKS0_ctx_t *ctx) {
    ctx->id = 1273;
    ctx->coefficient = 0.7;
    ctx->flags = 138;
}

int compute_tvqB2fs(int input) {
    int result = input * 59;
    for(int i = 0; i < 15; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} T4LQQdx9_ctx_t;

void init_ctx(T4LQQdx9_ctx_t *ctx) {
    ctx->id = 1353;
    ctx->coefficient = 9.9;
    ctx->flags = 62;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} Rggntjs9_ctx_t;

void init_ctx(Rggntjs9_ctx_t *ctx) {
    ctx->id = 1957;
    ctx->coefficient = 8.3;
    ctx->flags = 192;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} 9Sh0XCUF_ctx_t;

void init_ctx(9Sh0XCUF_ctx_t *ctx) {
    ctx->id = 5073;
    ctx->coefficient = 6.0;
    ctx->flags = 73;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} TlHW4kxe_ctx_t;

void init_ctx(TlHW4kxe_ctx_t *ctx) {
    ctx->id = 5481;
    ctx->coefficient = 7.3;
    ctx->flags = 1;
}

int compute_KoOewFQ(int input) {
    int result = input * 45;
    for(int i = 0; i < 6; i++) result += (i * 1);
    return result;
}

int compute_iPMPUqs(int input) {
    int result = input * 11;
    for(int i = 0; i < 18; i++) result += (i * 1);
    return result;
}

int compute_ZJsh0tS(int input) {
    int result = input * 26;
    for(int i = 0; i < 11; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} deF3D7r9_ctx_t;

void init_ctx(deF3D7r9_ctx_t *ctx) {
    ctx->id = 5455;
    ctx->coefficient = 3.8;
    ctx->flags = 225;
}

int compute_2sx8ASH(int input) {
    int result = input * 4;
    for(int i = 0; i < 17; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} nmZ2lAVm_ctx_t;

void init_ctx(nmZ2lAVm_ctx_t *ctx) {
    ctx->id = 8245;
    ctx->coefficient = 4.1;
    ctx->flags = 153;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} ZEatac7s_ctx_t;

void init_ctx(ZEatac7s_ctx_t *ctx) {
    ctx->id = 7719;
    ctx->coefficient = 0.8;
    ctx->flags = 95;
}

int compute_8H7bS0o(int input) {
    int result = input * 43;
    for(int i = 0; i < 14; i++) result += (i * 1);
    return result;
}

int compute_0l0XkbX(int input) {
    int result = input * 18;
    for(int i = 0; i < 8; i++) result += (i * 3);
    return result;
}

int compute_yMxxvwZ(int input) {
    int result = input * 67;
    for(int i = 0; i < 16; i++) result += (i * 2);
    return result;
}

int compute_CiBf9B1(int input) {
    int result = input * 56;
    for(int i = 0; i < 13; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} 3pBOuVa0_ctx_t;

void init_ctx(3pBOuVa0_ctx_t *ctx) {
    ctx->id = 9845;
    ctx->coefficient = 7.8;
    ctx->flags = 206;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} R1TCNbku_ctx_t;

void init_ctx(R1TCNbku_ctx_t *ctx) {
    ctx->id = 5801;
    ctx->coefficient = 9.7;
    ctx->flags = 224;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} ou6grmN4_ctx_t;

void init_ctx(ou6grmN4_ctx_t *ctx) {
    ctx->id = 4760;
    ctx->coefficient = 3.9;
    ctx->flags = 251;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} cPb1CPhc_ctx_t;

void init_ctx(cPb1CPhc_ctx_t *ctx) {
    ctx->id = 5232;
    ctx->coefficient = 4.6;
    ctx->flags = 230;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} jxjx9F2C_ctx_t;

void init_ctx(jxjx9F2C_ctx_t *ctx) {
    ctx->id = 2836;
    ctx->coefficient = 8.1;
    ctx->flags = 21;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} EQcjSApt_ctx_t;

void init_ctx(EQcjSApt_ctx_t *ctx) {
    ctx->id = 3595;
    ctx->coefficient = 10.0;
    ctx->flags = 77;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} XRIGvqEF_ctx_t;

void init_ctx(XRIGvqEF_ctx_t *ctx) {
    ctx->id = 7678;
    ctx->coefficient = 7.3;
    ctx->flags = 217;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} 3fFq1twI_ctx_t;

void init_ctx(3fFq1twI_ctx_t *ctx) {
    ctx->id = 7303;
    ctx->coefficient = 9.6;
    ctx->flags = 98;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} JyTdDJ1o_ctx_t;

void init_ctx(JyTdDJ1o_ctx_t *ctx) {
    ctx->id = 1743;
    ctx->coefficient = 4.1;
    ctx->flags = 126;
}

int compute_VKBjF2e(int input) {
    int result = input * 16;
    for(int i = 0; i < 13; i++) result += (i * 5);
    return result;
}

int compute_0qlQVAV(int input) {
    int result = input * 70;
    for(int i = 0; i < 13; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} 5YlX3oZy_ctx_t;

void init_ctx(5YlX3oZy_ctx_t *ctx) {
    ctx->id = 6527;
    ctx->coefficient = 3.9;
    ctx->flags = 102;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} EqQLWNyb_ctx_t;

void init_ctx(EqQLWNyb_ctx_t *ctx) {
    ctx->id = 3666;
    ctx->coefficient = 9.6;
    ctx->flags = 198;
}

int compute_YaHDx6S(int input) {
    int result = input * 12;
    for(int i = 0; i < 8; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} huidjeOs_ctx_t;

void init_ctx(huidjeOs_ctx_t *ctx) {
    ctx->id = 6283;
    ctx->coefficient = 4.9;
    ctx->flags = 244;
}

int compute_zmHGdWg(int input) {
    int result = input * 34;
    for(int i = 0; i < 5; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} i8iH4vAL_ctx_t;

void init_ctx(i8iH4vAL_ctx_t *ctx) {
    ctx->id = 8937;
    ctx->coefficient = 8.5;
    ctx->flags = 127;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} iMVKlF72_ctx_t;

void init_ctx(iMVKlF72_ctx_t *ctx) {
    ctx->id = 1626;
    ctx->coefficient = 9.8;
    ctx->flags = 188;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} eSHOGhNK_ctx_t;

void init_ctx(eSHOGhNK_ctx_t *ctx) {
    ctx->id = 3404;
    ctx->coefficient = 4.0;
    ctx->flags = 147;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} ZjLJF4zi_ctx_t;

void init_ctx(ZjLJF4zi_ctx_t *ctx) {
    ctx->id = 6623;
    ctx->coefficient = 1.3;
    ctx->flags = 225;
}

int compute_pzVv7Yi(int input) {
    int result = input * 60;
    for(int i = 0; i < 9; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} UVD3cemY_ctx_t;

void init_ctx(UVD3cemY_ctx_t *ctx) {
    ctx->id = 1591;
    ctx->coefficient = 9.7;
    ctx->flags = 46;
}

int compute_FqyeYBq(int input) {
    int result = input * 32;
    for(int i = 0; i < 17; i++) result += (i * 4);
    return result;
}

int compute_tR7QHwp(int input) {
    int result = input * 64;
    for(int i = 0; i < 17; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} Aoo96OHa_ctx_t;

void init_ctx(Aoo96OHa_ctx_t *ctx) {
    ctx->id = 6548;
    ctx->coefficient = 8.1;
    ctx->flags = 126;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} V7p7doR1_ctx_t;

void init_ctx(V7p7doR1_ctx_t *ctx) {
    ctx->id = 9173;
    ctx->coefficient = 9.1;
    ctx->flags = 22;
}

int compute_0SGt7Vb(int input) {
    int result = input * 26;
    for(int i = 0; i < 6; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} KgIK1tVO_ctx_t;

void init_ctx(KgIK1tVO_ctx_t *ctx) {
    ctx->id = 4673;
    ctx->coefficient = 2.0;
    ctx->flags = 46;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} S7INiQdO_ctx_t;

void init_ctx(S7INiQdO_ctx_t *ctx) {
    ctx->id = 1978;
    ctx->coefficient = 2.6;
    ctx->flags = 212;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} nemPh01d_ctx_t;

void init_ctx(nemPh01d_ctx_t *ctx) {
    ctx->id = 1526;
    ctx->coefficient = 1.0;
    ctx->flags = 145;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} wR6B4gjF_ctx_t;

void init_ctx(wR6B4gjF_ctx_t *ctx) {
    ctx->id = 9394;
    ctx->coefficient = 6.1;
    ctx->flags = 128;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} aiodo9Iz_ctx_t;

void init_ctx(aiodo9Iz_ctx_t *ctx) {
    ctx->id = 8522;
    ctx->coefficient = 0.4;
    ctx->flags = 34;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} tYjTKWFj_ctx_t;

void init_ctx(tYjTKWFj_ctx_t *ctx) {
    ctx->id = 2677;
    ctx->coefficient = 0.5;
    ctx->flags = 252;
}

int compute_XDtrYTY(int input) {
    int result = input * 14;
    for(int i = 0; i < 13; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} tu4AEFJP_ctx_t;

void init_ctx(tu4AEFJP_ctx_t *ctx) {
    ctx->id = 8502;
    ctx->coefficient = 9.6;
    ctx->flags = 42;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} CmmDnNAL_ctx_t;

void init_ctx(CmmDnNAL_ctx_t *ctx) {
    ctx->id = 2775;
    ctx->coefficient = 3.5;
    ctx->flags = 117;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} 0JUUAghU_ctx_t;

void init_ctx(0JUUAghU_ctx_t *ctx) {
    ctx->id = 1712;
    ctx->coefficient = 7.6;
    ctx->flags = 17;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} Xi4dJOlT_ctx_t;

void init_ctx(Xi4dJOlT_ctx_t *ctx) {
    ctx->id = 1140;
    ctx->coefficient = 9.0;
    ctx->flags = 74;
}

int compute_Kirlz9W(int input) {
    int result = input * 16;
    for(int i = 0; i < 17; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} vK1YGcfb_ctx_t;

void init_ctx(vK1YGcfb_ctx_t *ctx) {
    ctx->id = 5715;
    ctx->coefficient = 0.4;
    ctx->flags = 100;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} Jbbxf2DY_ctx_t;

void init_ctx(Jbbxf2DY_ctx_t *ctx) {
    ctx->id = 6633;
    ctx->coefficient = 3.3;
    ctx->flags = 130;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} T0wiFg5o_ctx_t;

void init_ctx(T0wiFg5o_ctx_t *ctx) {
    ctx->id = 1155;
    ctx->coefficient = 3.7;
    ctx->flags = 93;
}

int compute_BVTkqaU(int input) {
    int result = input * 64;
    for(int i = 0; i < 12; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} z6Oq1Fq9_ctx_t;

void init_ctx(z6Oq1Fq9_ctx_t *ctx) {
    ctx->id = 4483;
    ctx->coefficient = 9.6;
    ctx->flags = 52;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} 2yH9zYbr_ctx_t;

void init_ctx(2yH9zYbr_ctx_t *ctx) {
    ctx->id = 9561;
    ctx->coefficient = 6.6;
    ctx->flags = 77;
}

int compute_3Vn4qIX(int input) {
    int result = input * 35;
    for(int i = 0; i < 9; i++) result += (i * 3);
    return result;
}

int compute_0In9Z0Z(int input) {
    int result = input * 25;
    for(int i = 0; i < 10; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} 3ViU2lhc_ctx_t;

void init_ctx(3ViU2lhc_ctx_t *ctx) {
    ctx->id = 8155;
    ctx->coefficient = 2.6;
    ctx->flags = 227;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} 5Gy8YBAu_ctx_t;

void init_ctx(5Gy8YBAu_ctx_t *ctx) {
    ctx->id = 3329;
    ctx->coefficient = 4.6;
    ctx->flags = 166;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} cQDm97Ze_ctx_t;

void init_ctx(cQDm97Ze_ctx_t *ctx) {
    ctx->id = 6885;
    ctx->coefficient = 0.9;
    ctx->flags = 6;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} b3WGCAU5_ctx_t;

void init_ctx(b3WGCAU5_ctx_t *ctx) {
    ctx->id = 5157;
    ctx->coefficient = 0.9;
    ctx->flags = 179;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} z21bVIr2_ctx_t;

void init_ctx(z21bVIr2_ctx_t *ctx) {
    ctx->id = 5388;
    ctx->coefficient = 3.6;
    ctx->flags = 113;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} rvE1eBno_ctx_t;

void init_ctx(rvE1eBno_ctx_t *ctx) {
    ctx->id = 9323;
    ctx->coefficient = 7.4;
    ctx->flags = 175;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} ZF3GVtM4_ctx_t;

void init_ctx(ZF3GVtM4_ctx_t *ctx) {
    ctx->id = 8558;
    ctx->coefficient = 5.3;
    ctx->flags = 31;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} Dl6X83pb_ctx_t;

void init_ctx(Dl6X83pb_ctx_t *ctx) {
    ctx->id = 3954;
    ctx->coefficient = 1.4;
    ctx->flags = 222;
}

int compute_pMyQPoE(int input) {
    int result = input * 20;
    for(int i = 0; i < 17; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} B0oEKI92_ctx_t;

void init_ctx(B0oEKI92_ctx_t *ctx) {
    ctx->id = 5371;
    ctx->coefficient = 7.7;
    ctx->flags = 53;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} DJDLXnbW_ctx_t;

void init_ctx(DJDLXnbW_ctx_t *ctx) {
    ctx->id = 5909;
    ctx->coefficient = 8.8;
    ctx->flags = 189;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} Vm4U0CzH_ctx_t;

void init_ctx(Vm4U0CzH_ctx_t *ctx) {
    ctx->id = 8644;
    ctx->coefficient = 2.2;
    ctx->flags = 50;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} 74QUcgxX_ctx_t;

void init_ctx(74QUcgxX_ctx_t *ctx) {
    ctx->id = 2447;
    ctx->coefficient = 0.8;
    ctx->flags = 43;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} GQsxSWi2_ctx_t;

void init_ctx(GQsxSWi2_ctx_t *ctx) {
    ctx->id = 2270;
    ctx->coefficient = 5.1;
    ctx->flags = 107;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} qeTRzpV1_ctx_t;

void init_ctx(qeTRzpV1_ctx_t *ctx) {
    ctx->id = 3499;
    ctx->coefficient = 2.4;
    ctx->flags = 18;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} frDUqnh9_ctx_t;

void init_ctx(frDUqnh9_ctx_t *ctx) {
    ctx->id = 7951;
    ctx->coefficient = 1.5;
    ctx->flags = 93;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} QywxAuFr_ctx_t;

void init_ctx(QywxAuFr_ctx_t *ctx) {
    ctx->id = 2626;
    ctx->coefficient = 0.4;
    ctx->flags = 11;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} VSnBASNF_ctx_t;

void init_ctx(VSnBASNF_ctx_t *ctx) {
    ctx->id = 6490;
    ctx->coefficient = 9.7;
    ctx->flags = 150;
}

int compute_H3du3lU(int input) {
    int result = input * 44;
    for(int i = 0; i < 5; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} 71vd3fbg_ctx_t;

void init_ctx(71vd3fbg_ctx_t *ctx) {
    ctx->id = 3773;
    ctx->coefficient = 0.2;
    ctx->flags = 70;
}

int compute_DPAw5sg(int input) {
    int result = input * 5;
    for(int i = 0; i < 6; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} Ugpfs22p_ctx_t;

void init_ctx(Ugpfs22p_ctx_t *ctx) {
    ctx->id = 6857;
    ctx->coefficient = 7.7;
    ctx->flags = 28;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} fALcT4ab_ctx_t;

void init_ctx(fALcT4ab_ctx_t *ctx) {
    ctx->id = 1272;
    ctx->coefficient = 7.8;
    ctx->flags = 22;
}

int compute_QJh9OrP(int input) {
    int result = input * 37;
    for(int i = 0; i < 4; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} 9DioCnqk_ctx_t;

void init_ctx(9DioCnqk_ctx_t *ctx) {
    ctx->id = 4060;
    ctx->coefficient = 4.5;
    ctx->flags = 173;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} BOl5QDRz_ctx_t;

void init_ctx(BOl5QDRz_ctx_t *ctx) {
    ctx->id = 6315;
    ctx->coefficient = 5.3;
    ctx->flags = 124;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} 65Be5meb_ctx_t;

void init_ctx(65Be5meb_ctx_t *ctx) {
    ctx->id = 3329;
    ctx->coefficient = 4.8;
    ctx->flags = 206;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} aHTC5J4g_ctx_t;

void init_ctx(aHTC5J4g_ctx_t *ctx) {
    ctx->id = 4960;
    ctx->coefficient = 4.4;
    ctx->flags = 87;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} if24gETR_ctx_t;

void init_ctx(if24gETR_ctx_t *ctx) {
    ctx->id = 1551;
    ctx->coefficient = 2.0;
    ctx->flags = 46;
}

int compute_ZxBrPF5(int input) {
    int result = input * 37;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

int compute_uBUQnzM(int input) {
    int result = input * 21;
    for(int i = 0; i < 4; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} WWSmDH6A_ctx_t;

void init_ctx(WWSmDH6A_ctx_t *ctx) {
    ctx->id = 6920;
    ctx->coefficient = 3.2;
    ctx->flags = 125;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} LYzGkx25_ctx_t;

void init_ctx(LYzGkx25_ctx_t *ctx) {
    ctx->id = 3155;
    ctx->coefficient = 2.0;
    ctx->flags = 93;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} sZ0f1Qp7_ctx_t;

void init_ctx(sZ0f1Qp7_ctx_t *ctx) {
    ctx->id = 7044;
    ctx->coefficient = 6.7;
    ctx->flags = 135;
}

int compute_FpCM480(int input) {
    int result = input * 49;
    for(int i = 0; i < 11; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} l4mgWoV7_ctx_t;

void init_ctx(l4mgWoV7_ctx_t *ctx) {
    ctx->id = 1639;
    ctx->coefficient = 7.6;
    ctx->flags = 0;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} xAZxgH2x_ctx_t;

void init_ctx(xAZxgH2x_ctx_t *ctx) {
    ctx->id = 5484;
    ctx->coefficient = 4.6;
    ctx->flags = 221;
}

int compute_sFajoza(int input) {
    int result = input * 12;
    for(int i = 0; i < 8; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} DDBlleXf_ctx_t;

void init_ctx(DDBlleXf_ctx_t *ctx) {
    ctx->id = 1389;
    ctx->coefficient = 4.5;
    ctx->flags = 57;
}

int compute_ud45EOU(int input) {
    int result = input * 22;
    for(int i = 0; i < 6; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} owF8FThu_ctx_t;

void init_ctx(owF8FThu_ctx_t *ctx) {
    ctx->id = 9438;
    ctx->coefficient = 6.8;
    ctx->flags = 253;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} pqzf1noj_ctx_t;

void init_ctx(pqzf1noj_ctx_t *ctx) {
    ctx->id = 4746;
    ctx->coefficient = 7.8;
    ctx->flags = 94;
}

int compute_MQKJEyn(int input) {
    int result = input * 59;
    for(int i = 0; i < 9; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} eIIeaPI6_ctx_t;

void init_ctx(eIIeaPI6_ctx_t *ctx) {
    ctx->id = 3082;
    ctx->coefficient = 0.7;
    ctx->flags = 216;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} jQPR3bJi_ctx_t;

void init_ctx(jQPR3bJi_ctx_t *ctx) {
    ctx->id = 6358;
    ctx->coefficient = 0.3;
    ctx->flags = 170;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} KJoNjOdm_ctx_t;

void init_ctx(KJoNjOdm_ctx_t *ctx) {
    ctx->id = 5148;
    ctx->coefficient = 9.3;
    ctx->flags = 5;
}

int compute_uWFd7OU(int input) {
    int result = input * 8;
    for(int i = 0; i < 18; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} OFiLCowo_ctx_t;

void init_ctx(OFiLCowo_ctx_t *ctx) {
    ctx->id = 5205;
    ctx->coefficient = 4.2;
    ctx->flags = 56;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} qqJ4cZUP_ctx_t;

void init_ctx(qqJ4cZUP_ctx_t *ctx) {
    ctx->id = 2822;
    ctx->coefficient = 6.5;
    ctx->flags = 47;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} hupc3kxU_ctx_t;

void init_ctx(hupc3kxU_ctx_t *ctx) {
    ctx->id = 4975;
    ctx->coefficient = 9.0;
    ctx->flags = 161;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} S5oGqhSw_ctx_t;

void init_ctx(S5oGqhSw_ctx_t *ctx) {
    ctx->id = 2385;
    ctx->coefficient = 4.8;
    ctx->flags = 172;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} KzRVlGD1_ctx_t;

void init_ctx(KzRVlGD1_ctx_t *ctx) {
    ctx->id = 1962;
    ctx->coefficient = 8.8;
    ctx->flags = 130;
}

int compute_HfAwk1o(int input) {
    int result = input * 33;
    for(int i = 0; i < 5; i++) result += (i * 4);
    return result;
}

int compute_8FounRy(int input) {
    int result = input * 65;
    for(int i = 0; i < 17; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} AoScwqYk_ctx_t;

void init_ctx(AoScwqYk_ctx_t *ctx) {
    ctx->id = 9220;
    ctx->coefficient = 8.1;
    ctx->flags = 12;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} 1TBB8DUW_ctx_t;

void init_ctx(1TBB8DUW_ctx_t *ctx) {
    ctx->id = 7594;
    ctx->coefficient = 9.1;
    ctx->flags = 89;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} mSZJP6zD_ctx_t;

void init_ctx(mSZJP6zD_ctx_t *ctx) {
    ctx->id = 8257;
    ctx->coefficient = 4.6;
    ctx->flags = 55;
}

int compute_R8OCAin(int input) {
    int result = input * 33;
    for(int i = 0; i < 11; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} Lh3JS1Vy_ctx_t;

void init_ctx(Lh3JS1Vy_ctx_t *ctx) {
    ctx->id = 8325;
    ctx->coefficient = 5.1;
    ctx->flags = 95;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} xztFcWcS_ctx_t;

void init_ctx(xztFcWcS_ctx_t *ctx) {
    ctx->id = 3191;
    ctx->coefficient = 5.1;
    ctx->flags = 166;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} ELCli8Xl_ctx_t;

void init_ctx(ELCli8Xl_ctx_t *ctx) {
    ctx->id = 7130;
    ctx->coefficient = 6.8;
    ctx->flags = 253;
}

int compute_kGf3tkL(int input) {
    int result = input * 63;
    for(int i = 0; i < 12; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} Xfpr2Sq2_ctx_t;

void init_ctx(Xfpr2Sq2_ctx_t *ctx) {
    ctx->id = 3201;
    ctx->coefficient = 7.2;
    ctx->flags = 131;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} V3nEl0uh_ctx_t;

void init_ctx(V3nEl0uh_ctx_t *ctx) {
    ctx->id = 9758;
    ctx->coefficient = 6.2;
    ctx->flags = 152;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} yagsxwQX_ctx_t;

void init_ctx(yagsxwQX_ctx_t *ctx) {
    ctx->id = 2242;
    ctx->coefficient = 0.1;
    ctx->flags = 251;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} Mg7rzI8g_ctx_t;

void init_ctx(Mg7rzI8g_ctx_t *ctx) {
    ctx->id = 4372;
    ctx->coefficient = 8.9;
    ctx->flags = 118;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} Jm98uTVS_ctx_t;

void init_ctx(Jm98uTVS_ctx_t *ctx) {
    ctx->id = 4038;
    ctx->coefficient = 5.1;
    ctx->flags = 153;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} GD52uQIM_ctx_t;

void init_ctx(GD52uQIM_ctx_t *ctx) {
    ctx->id = 7401;
    ctx->coefficient = 8.8;
    ctx->flags = 72;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} iE6iXlC7_ctx_t;

void init_ctx(iE6iXlC7_ctx_t *ctx) {
    ctx->id = 6061;
    ctx->coefficient = 0.5;
    ctx->flags = 28;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} 7ukdJ4ZW_ctx_t;

void init_ctx(7ukdJ4ZW_ctx_t *ctx) {
    ctx->id = 1139;
    ctx->coefficient = 4.8;
    ctx->flags = 138;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} 64CLooOh_ctx_t;

void init_ctx(64CLooOh_ctx_t *ctx) {
    ctx->id = 9770;
    ctx->coefficient = 3.5;
    ctx->flags = 55;
}

int compute_AhElvo7(int input) {
    int result = input * 57;
    for(int i = 0; i < 5; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} MR73lbP6_ctx_t;

void init_ctx(MR73lbP6_ctx_t *ctx) {
    ctx->id = 5507;
    ctx->coefficient = 6.2;
    ctx->flags = 185;
}

int compute_1Jcsd4G(int input) {
    int result = input * 4;
    for(int i = 0; i < 8; i++) result += (i * 3);
    return result;
}

int compute_ViRUZxo(int input) {
    int result = input * 32;
    for(int i = 0; i < 10; i++) result += (i * 4);
    return result;
}

int compute_iw9e83F(int input) {
    int result = input * 61;
    for(int i = 0; i < 9; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} rb2Hb8EK_ctx_t;

void init_ctx(rb2Hb8EK_ctx_t *ctx) {
    ctx->id = 6117;
    ctx->coefficient = 1.2;
    ctx->flags = 88;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} S6WS3m8Z_ctx_t;

void init_ctx(S6WS3m8Z_ctx_t *ctx) {
    ctx->id = 7209;
    ctx->coefficient = 9.6;
    ctx->flags = 134;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} MHEwDms1_ctx_t;

void init_ctx(MHEwDms1_ctx_t *ctx) {
    ctx->id = 6548;
    ctx->coefficient = 2.4;
    ctx->flags = 124;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} oN3JJ81A_ctx_t;

void init_ctx(oN3JJ81A_ctx_t *ctx) {
    ctx->id = 7416;
    ctx->coefficient = 3.1;
    ctx->flags = 147;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} ZXzKhx5F_ctx_t;

void init_ctx(ZXzKhx5F_ctx_t *ctx) {
    ctx->id = 8678;
    ctx->coefficient = 6.0;
    ctx->flags = 118;
}

int compute_QuhewHp(int input) {
    int result = input * 38;
    for(int i = 0; i < 13; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} K9TeissW_ctx_t;

void init_ctx(K9TeissW_ctx_t *ctx) {
    ctx->id = 4893;
    ctx->coefficient = 1.1;
    ctx->flags = 237;
}

int compute_FUIPFhp(int input) {
    int result = input * 70;
    for(int i = 0; i < 13; i++) result += (i * 1);
    return result;
}

int compute_sAi7xYL(int input) {
    int result = input * 43;
    for(int i = 0; i < 5; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} 4552QYxB_ctx_t;

void init_ctx(4552QYxB_ctx_t *ctx) {
    ctx->id = 7868;
    ctx->coefficient = 4.2;
    ctx->flags = 90;
}

int compute_RqrScBa(int input) {
    int result = input * 15;
    for(int i = 0; i < 17; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} X9bJ55KJ_ctx_t;

void init_ctx(X9bJ55KJ_ctx_t *ctx) {
    ctx->id = 7073;
    ctx->coefficient = 5.7;
    ctx->flags = 224;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} gp2Ok767_ctx_t;

void init_ctx(gp2Ok767_ctx_t *ctx) {
    ctx->id = 5389;
    ctx->coefficient = 5.7;
    ctx->flags = 30;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} K81PdC9a_ctx_t;

void init_ctx(K81PdC9a_ctx_t *ctx) {
    ctx->id = 7488;
    ctx->coefficient = 0.1;
    ctx->flags = 28;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} MuVNTiMq_ctx_t;

void init_ctx(MuVNTiMq_ctx_t *ctx) {
    ctx->id = 6606;
    ctx->coefficient = 2.8;
    ctx->flags = 8;
}

int compute_M3JrBtE(int input) {
    int result = input * 49;
    for(int i = 0; i < 3; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} 7oGWlVbC_ctx_t;

void init_ctx(7oGWlVbC_ctx_t *ctx) {
    ctx->id = 8508;
    ctx->coefficient = 4.2;
    ctx->flags = 129;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} RpUYJ4Ec_ctx_t;

void init_ctx(RpUYJ4Ec_ctx_t *ctx) {
    ctx->id = 5340;
    ctx->coefficient = 4.3;
    ctx->flags = 22;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} Pb25SyOR_ctx_t;

void init_ctx(Pb25SyOR_ctx_t *ctx) {
    ctx->id = 7945;
    ctx->coefficient = 3.8;
    ctx->flags = 71;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} amShBnXA_ctx_t;

void init_ctx(amShBnXA_ctx_t *ctx) {
    ctx->id = 5341;
    ctx->coefficient = 1.2;
    ctx->flags = 66;
}

int compute_ZnSMOXB(int input) {
    int result = input * 68;
    for(int i = 0; i < 4; i++) result += (i * 1);
    return result;
}

int compute_UyeadHn(int input) {
    int result = input * 4;
    for(int i = 0; i < 4; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} oyXoX8Dr_ctx_t;

void init_ctx(oyXoX8Dr_ctx_t *ctx) {
    ctx->id = 2643;
    ctx->coefficient = 3.1;
    ctx->flags = 165;
}

int compute_a6raJ7y(int input) {
    int result = input * 25;
    for(int i = 0; i < 10; i++) result += (i * 2);
    return result;
}

int compute_Fcicm06(int input) {
    int result = input * 35;
    for(int i = 0; i < 15; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} kPIjzThI_ctx_t;

void init_ctx(kPIjzThI_ctx_t *ctx) {
    ctx->id = 5790;
    ctx->coefficient = 2.1;
    ctx->flags = 123;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} SJdLmHC3_ctx_t;

void init_ctx(SJdLmHC3_ctx_t *ctx) {
    ctx->id = 4834;
    ctx->coefficient = 7.1;
    ctx->flags = 233;
}

int compute_WnjQOVh(int input) {
    int result = input * 30;
    for(int i = 0; i < 12; i++) result += (i * 3);
    return result;
}

int compute_wE93Fog(int input) {
    int result = input * 50;
    for(int i = 0; i < 16; i++) result += (i * 2);
    return result;
}

int compute_MkmKYsf(int input) {
    int result = input * 38;
    for(int i = 0; i < 12; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} rRrc2qS3_ctx_t;

void init_ctx(rRrc2qS3_ctx_t *ctx) {
    ctx->id = 3166;
    ctx->coefficient = 0.1;
    ctx->flags = 129;
}

int compute_2hPTOfQ(int input) {
    int result = input * 32;
    for(int i = 0; i < 15; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} mPPtlnWz_ctx_t;

void init_ctx(mPPtlnWz_ctx_t *ctx) {
    ctx->id = 5976;
    ctx->coefficient = 6.3;
    ctx->flags = 109;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} OZ2wtp0N_ctx_t;

void init_ctx(OZ2wtp0N_ctx_t *ctx) {
    ctx->id = 3994;
    ctx->coefficient = 8.7;
    ctx->flags = 35;
}

int compute_PUuHvJR(int input) {
    int result = input * 16;
    for(int i = 0; i < 15; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} AahEMaWe_ctx_t;

void init_ctx(AahEMaWe_ctx_t *ctx) {
    ctx->id = 6275;
    ctx->coefficient = 5.6;
    ctx->flags = 67;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} cOoVOPgZ_ctx_t;

void init_ctx(cOoVOPgZ_ctx_t *ctx) {
    ctx->id = 4012;
    ctx->coefficient = 8.2;
    ctx->flags = 236;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} cSp72LBS_ctx_t;

void init_ctx(cSp72LBS_ctx_t *ctx) {
    ctx->id = 4729;
    ctx->coefficient = 3.1;
    ctx->flags = 86;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} fQsCkNzj_ctx_t;

void init_ctx(fQsCkNzj_ctx_t *ctx) {
    ctx->id = 8460;
    ctx->coefficient = 7.9;
    ctx->flags = 138;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} 3YvV6Zow_ctx_t;

void init_ctx(3YvV6Zow_ctx_t *ctx) {
    ctx->id = 8678;
    ctx->coefficient = 0.5;
    ctx->flags = 67;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} 3dSH9f7d_ctx_t;

void init_ctx(3dSH9f7d_ctx_t *ctx) {
    ctx->id = 3460;
    ctx->coefficient = 0.8;
    ctx->flags = 125;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} sk3lw8lM_ctx_t;

void init_ctx(sk3lw8lM_ctx_t *ctx) {
    ctx->id = 7239;
    ctx->coefficient = 6.9;
    ctx->flags = 155;
}

int compute_4uYa9iS(int input) {
    int result = input * 40;
    for(int i = 0; i < 14; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} xGo2QOD5_ctx_t;

void init_ctx(xGo2QOD5_ctx_t *ctx) {
    ctx->id = 4645;
    ctx->coefficient = 4.6;
    ctx->flags = 56;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} 62wlgzcf_ctx_t;

void init_ctx(62wlgzcf_ctx_t *ctx) {
    ctx->id = 3871;
    ctx->coefficient = 3.5;
    ctx->flags = 54;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} U63a7xD2_ctx_t;

void init_ctx(U63a7xD2_ctx_t *ctx) {
    ctx->id = 3974;
    ctx->coefficient = 4.7;
    ctx->flags = 94;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} pkZhclFc_ctx_t;

void init_ctx(pkZhclFc_ctx_t *ctx) {
    ctx->id = 7136;
    ctx->coefficient = 4.6;
    ctx->flags = 59;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} UfLdtGYM_ctx_t;

void init_ctx(UfLdtGYM_ctx_t *ctx) {
    ctx->id = 5598;
    ctx->coefficient = 3.5;
    ctx->flags = 10;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} K9iAOT7P_ctx_t;

void init_ctx(K9iAOT7P_ctx_t *ctx) {
    ctx->id = 6530;
    ctx->coefficient = 0.9;
    ctx->flags = 87;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} i6AsIeot_ctx_t;

void init_ctx(i6AsIeot_ctx_t *ctx) {
    ctx->id = 3426;
    ctx->coefficient = 5.4;
    ctx->flags = 242;
}

int compute_DVgWKH0(int input) {
    int result = input * 59;
    for(int i = 0; i < 6; i++) result += (i * 1);
    return result;
}

int compute_PJ4BziQ(int input) {
    int result = input * 26;
    for(int i = 0; i < 13; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} m6qIWky3_ctx_t;

void init_ctx(m6qIWky3_ctx_t *ctx) {
    ctx->id = 6363;
    ctx->coefficient = 8.2;
    ctx->flags = 39;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} ubWJ8eNE_ctx_t;

void init_ctx(ubWJ8eNE_ctx_t *ctx) {
    ctx->id = 6028;
    ctx->coefficient = 1.7;
    ctx->flags = 150;
}

int compute_3amW4VQ(int input) {
    int result = input * 63;
    for(int i = 0; i < 7; i++) result += (i * 4);
    return result;
}

int compute_UwUna4R(int input) {
    int result = input * 12;
    for(int i = 0; i < 5; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} hed2TbZA_ctx_t;

void init_ctx(hed2TbZA_ctx_t *ctx) {
    ctx->id = 6050;
    ctx->coefficient = 6.9;
    ctx->flags = 182;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} SG3TkaRe_ctx_t;

void init_ctx(SG3TkaRe_ctx_t *ctx) {
    ctx->id = 8174;
    ctx->coefficient = 9.0;
    ctx->flags = 151;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} TgmYkF50_ctx_t;

void init_ctx(TgmYkF50_ctx_t *ctx) {
    ctx->id = 7797;
    ctx->coefficient = 8.6;
    ctx->flags = 163;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} m1JdX7Vw_ctx_t;

void init_ctx(m1JdX7Vw_ctx_t *ctx) {
    ctx->id = 7325;
    ctx->coefficient = 0.5;
    ctx->flags = 246;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} Xyyse7Jc_ctx_t;

void init_ctx(Xyyse7Jc_ctx_t *ctx) {
    ctx->id = 8454;
    ctx->coefficient = 1.4;
    ctx->flags = 230;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} BCDKgYh9_ctx_t;

void init_ctx(BCDKgYh9_ctx_t *ctx) {
    ctx->id = 1001;
    ctx->coefficient = 8.9;
    ctx->flags = 63;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} eRhpQWs8_ctx_t;

void init_ctx(eRhpQWs8_ctx_t *ctx) {
    ctx->id = 8360;
    ctx->coefficient = 1.8;
    ctx->flags = 116;
}

int compute_sDYu7Mv(int input) {
    int result = input * 13;
    for(int i = 0; i < 13; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} 0PGfbyvD_ctx_t;

void init_ctx(0PGfbyvD_ctx_t *ctx) {
    ctx->id = 7883;
    ctx->coefficient = 6.9;
    ctx->flags = 184;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} NVVFRRUn_ctx_t;

void init_ctx(NVVFRRUn_ctx_t *ctx) {
    ctx->id = 5090;
    ctx->coefficient = 7.9;
    ctx->flags = 63;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} 1fAxT26C_ctx_t;

void init_ctx(1fAxT26C_ctx_t *ctx) {
    ctx->id = 6465;
    ctx->coefficient = 5.1;
    ctx->flags = 89;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} za9Bu6zC_ctx_t;

void init_ctx(za9Bu6zC_ctx_t *ctx) {
    ctx->id = 9873;
    ctx->coefficient = 4.2;
    ctx->flags = 158;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} gBnyZ7T4_ctx_t;

void init_ctx(gBnyZ7T4_ctx_t *ctx) {
    ctx->id = 3536;
    ctx->coefficient = 6.6;
    ctx->flags = 118;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} icQ3q9LE_ctx_t;

void init_ctx(icQ3q9LE_ctx_t *ctx) {
    ctx->id = 2497;
    ctx->coefficient = 1.2;
    ctx->flags = 116;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} 4nburmll_ctx_t;

void init_ctx(4nburmll_ctx_t *ctx) {
    ctx->id = 8176;
    ctx->coefficient = 2.8;
    ctx->flags = 139;
}

int compute_2BwzxLp(int input) {
    int result = input * 28;
    for(int i = 0; i < 10; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} 8RqCcEez_ctx_t;

void init_ctx(8RqCcEez_ctx_t *ctx) {
    ctx->id = 7039;
    ctx->coefficient = 5.5;
    ctx->flags = 155;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} I2bIkW2L_ctx_t;

void init_ctx(I2bIkW2L_ctx_t *ctx) {
    ctx->id = 6496;
    ctx->coefficient = 1.0;
    ctx->flags = 150;
}

int compute_I61R4AJ(int input) {
    int result = input * 53;
    for(int i = 0; i < 4; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} hYg824Ao_ctx_t;

void init_ctx(hYg824Ao_ctx_t *ctx) {
    ctx->id = 3217;
    ctx->coefficient = 9.4;
    ctx->flags = 34;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} POb7f27O_ctx_t;

void init_ctx(POb7f27O_ctx_t *ctx) {
    ctx->id = 3776;
    ctx->coefficient = 5.6;
    ctx->flags = 249;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} fYb5qL15_ctx_t;

void init_ctx(fYb5qL15_ctx_t *ctx) {
    ctx->id = 7690;
    ctx->coefficient = 2.2;
    ctx->flags = 149;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} 4nEUV6ws_ctx_t;

void init_ctx(4nEUV6ws_ctx_t *ctx) {
    ctx->id = 2691;
    ctx->coefficient = 8.2;
    ctx->flags = 86;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} 9St0JV69_ctx_t;

void init_ctx(9St0JV69_ctx_t *ctx) {
    ctx->id = 1200;
    ctx->coefficient = 1.9;
    ctx->flags = 201;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} wgcIUHEL_ctx_t;

void init_ctx(wgcIUHEL_ctx_t *ctx) {
    ctx->id = 7302;
    ctx->coefficient = 6.6;
    ctx->flags = 129;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} fMMmUtqH_ctx_t;

void init_ctx(fMMmUtqH_ctx_t *ctx) {
    ctx->id = 9110;
    ctx->coefficient = 7.1;
    ctx->flags = 37;
}

int compute_mNlS1BP(int input) {
    int result = input * 41;
    for(int i = 0; i < 5; i++) result += (i * 2);
    return result;
}

int compute_Bbdb0J0(int input) {
    int result = input * 15;
    for(int i = 0; i < 9; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} ZF8acYub_ctx_t;

void init_ctx(ZF8acYub_ctx_t *ctx) {
    ctx->id = 6124;
    ctx->coefficient = 7.0;
    ctx->flags = 129;
}

int compute_yOMK43R(int input) {
    int result = input * 42;
    for(int i = 0; i < 15; i++) result += (i * 2);
    return result;
}

int compute_AC0Tkqg(int input) {
    int result = input * 32;
    for(int i = 0; i < 14; i++) result += (i * 3);
    return result;
}

int compute_WRntgHb(int input) {
    int result = input * 52;
    for(int i = 0; i < 8; i++) result += (i * 1);
    return result;
}

int compute_S2V5Yc7(int input) {
    int result = input * 61;
    for(int i = 0; i < 13; i++) result += (i * 2);
    return result;
}

int compute_I88v6Dd(int input) {
    int result = input * 35;
    for(int i = 0; i < 9; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} dq9luGX9_ctx_t;

void init_ctx(dq9luGX9_ctx_t *ctx) {
    ctx->id = 3479;
    ctx->coefficient = 9.3;
    ctx->flags = 196;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} PgNeozww_ctx_t;

void init_ctx(PgNeozww_ctx_t *ctx) {
    ctx->id = 1931;
    ctx->coefficient = 5.5;
    ctx->flags = 203;
}

int compute_hxhQpwX(int input) {
    int result = input * 37;
    for(int i = 0; i < 12; i++) result += (i * 4);
    return result;
}

int compute_FvX16Ra(int input) {
    int result = input * 62;
    for(int i = 0; i < 13; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} b09MVMLH_ctx_t;

void init_ctx(b09MVMLH_ctx_t *ctx) {
    ctx->id = 5676;
    ctx->coefficient = 8.9;
    ctx->flags = 58;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} Xi5kqCz1_ctx_t;

void init_ctx(Xi5kqCz1_ctx_t *ctx) {
    ctx->id = 1668;
    ctx->coefficient = 3.3;
    ctx->flags = 118;
}

int compute_leYi0XH(int input) {
    int result = input * 48;
    for(int i = 0; i < 18; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} rqD8i2TA_ctx_t;

void init_ctx(rqD8i2TA_ctx_t *ctx) {
    ctx->id = 6909;
    ctx->coefficient = 6.8;
    ctx->flags = 159;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} JE3SA2Vz_ctx_t;

void init_ctx(JE3SA2Vz_ctx_t *ctx) {
    ctx->id = 5097;
    ctx->coefficient = 3.6;
    ctx->flags = 35;
}

int compute_nDDqCx2(int input) {
    int result = input * 51;
    for(int i = 0; i < 13; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} 8Mkh2MuQ_ctx_t;

void init_ctx(8Mkh2MuQ_ctx_t *ctx) {
    ctx->id = 3814;
    ctx->coefficient = 2.5;
    ctx->flags = 147;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} KWutQhnz_ctx_t;

void init_ctx(KWutQhnz_ctx_t *ctx) {
    ctx->id = 7883;
    ctx->coefficient = 6.5;
    ctx->flags = 185;
}

int compute_SSfSMaL(int input) {
    int result = input * 40;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} gZxnObj8_ctx_t;

void init_ctx(gZxnObj8_ctx_t *ctx) {
    ctx->id = 6762;
    ctx->coefficient = 4.7;
    ctx->flags = 126;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} 217L9JHv_ctx_t;

void init_ctx(217L9JHv_ctx_t *ctx) {
    ctx->id = 6899;
    ctx->coefficient = 0.8;
    ctx->flags = 117;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} wUS1yDkj_ctx_t;

void init_ctx(wUS1yDkj_ctx_t *ctx) {
    ctx->id = 1361;
    ctx->coefficient = 4.0;
    ctx->flags = 4;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} BUjb0ov8_ctx_t;

void init_ctx(BUjb0ov8_ctx_t *ctx) {
    ctx->id = 5498;
    ctx->coefficient = 7.5;
    ctx->flags = 193;
}

int compute_ulXyWAw(int input) {
    int result = input * 5;
    for(int i = 0; i < 7; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} 78af5Nh7_ctx_t;

void init_ctx(78af5Nh7_ctx_t *ctx) {
    ctx->id = 5057;
    ctx->coefficient = 8.4;
    ctx->flags = 2;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} 0A1sl7pp_ctx_t;

void init_ctx(0A1sl7pp_ctx_t *ctx) {
    ctx->id = 7763;
    ctx->coefficient = 7.7;
    ctx->flags = 3;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} i4pJnFN4_ctx_t;

void init_ctx(i4pJnFN4_ctx_t *ctx) {
    ctx->id = 7687;
    ctx->coefficient = 6.9;
    ctx->flags = 173;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} n902vjYW_ctx_t;

void init_ctx(n902vjYW_ctx_t *ctx) {
    ctx->id = 1592;
    ctx->coefficient = 2.0;
    ctx->flags = 23;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} yB0CMbeR_ctx_t;

void init_ctx(yB0CMbeR_ctx_t *ctx) {
    ctx->id = 8950;
    ctx->coefficient = 5.3;
    ctx->flags = 200;
}

int compute_93A4NE0(int input) {
    int result = input * 34;
    for(int i = 0; i < 17; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} 0RboXNJX_ctx_t;

void init_ctx(0RboXNJX_ctx_t *ctx) {
    ctx->id = 7968;
    ctx->coefficient = 5.3;
    ctx->flags = 137;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} 65Z90YP9_ctx_t;

void init_ctx(65Z90YP9_ctx_t *ctx) {
    ctx->id = 5558;
    ctx->coefficient = 0.6;
    ctx->flags = 174;
}

int compute_sd5hcpH(int input) {
    int result = input * 40;
    for(int i = 0; i < 15; i++) result += (i * 3);
    return result;
}

int compute_EuGjxga(int input) {
    int result = input * 28;
    for(int i = 0; i < 14; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} xNJXNtVs_ctx_t;

void init_ctx(xNJXNtVs_ctx_t *ctx) {
    ctx->id = 5013;
    ctx->coefficient = 4.1;
    ctx->flags = 207;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} 7IKMI6Ab_ctx_t;

void init_ctx(7IKMI6Ab_ctx_t *ctx) {
    ctx->id = 5231;
    ctx->coefficient = 3.8;
    ctx->flags = 18;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} cHYG60u2_ctx_t;

void init_ctx(cHYG60u2_ctx_t *ctx) {
    ctx->id = 5423;
    ctx->coefficient = 3.3;
    ctx->flags = 70;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} wgCJc4fb_ctx_t;

void init_ctx(wgCJc4fb_ctx_t *ctx) {
    ctx->id = 6712;
    ctx->coefficient = 3.1;
    ctx->flags = 9;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} NNqgUY5T_ctx_t;

void init_ctx(NNqgUY5T_ctx_t *ctx) {
    ctx->id = 7576;
    ctx->coefficient = 0.8;
    ctx->flags = 208;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} u5Zhi1bt_ctx_t;

void init_ctx(u5Zhi1bt_ctx_t *ctx) {
    ctx->id = 6575;
    ctx->coefficient = 1.3;
    ctx->flags = 213;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} uQAQ58i7_ctx_t;

void init_ctx(uQAQ58i7_ctx_t *ctx) {
    ctx->id = 2899;
    ctx->coefficient = 0.5;
    ctx->flags = 70;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} LotnFWy3_ctx_t;

void init_ctx(LotnFWy3_ctx_t *ctx) {
    ctx->id = 3586;
    ctx->coefficient = 0.5;
    ctx->flags = 143;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} giRBr2VK_ctx_t;

void init_ctx(giRBr2VK_ctx_t *ctx) {
    ctx->id = 3945;
    ctx->coefficient = 1.0;
    ctx->flags = 186;
}

int compute_9HQ36WA(int input) {
    int result = input * 54;
    for(int i = 0; i < 5; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} AabdoMFy_ctx_t;

void init_ctx(AabdoMFy_ctx_t *ctx) {
    ctx->id = 4330;
    ctx->coefficient = 8.6;
    ctx->flags = 194;
}

int compute_6eT7ETF(int input) {
    int result = input * 14;
    for(int i = 0; i < 13; i++) result += (i * 5);
    return result;
}

int compute_3shmCOg(int input) {
    int result = input * 26;
    for(int i = 0; i < 14; i++) result += (i * 5);
    return result;
}

int compute_bIpV8Sq(int input) {
    int result = input * 30;
    for(int i = 0; i < 10; i++) result += (i * 3);
    return result;
}

int compute_oLLx2Ok(int input) {
    int result = input * 25;
    for(int i = 0; i < 17; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} jthxT21C_ctx_t;

void init_ctx(jthxT21C_ctx_t *ctx) {
    ctx->id = 1437;
    ctx->coefficient = 8.8;
    ctx->flags = 34;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} DJ8fLc6F_ctx_t;

void init_ctx(DJ8fLc6F_ctx_t *ctx) {
    ctx->id = 9747;
    ctx->coefficient = 3.8;
    ctx->flags = 10;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} prX0gJkT_ctx_t;

void init_ctx(prX0gJkT_ctx_t *ctx) {
    ctx->id = 7787;
    ctx->coefficient = 0.5;
    ctx->flags = 168;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} eloRWAV3_ctx_t;

void init_ctx(eloRWAV3_ctx_t *ctx) {
    ctx->id = 3051;
    ctx->coefficient = 5.3;
    ctx->flags = 99;
}

int compute_KKlDEzA(int input) {
    int result = input * 37;
    for(int i = 0; i < 9; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} yJL2S44F_ctx_t;

void init_ctx(yJL2S44F_ctx_t *ctx) {
    ctx->id = 9831;
    ctx->coefficient = 6.5;
    ctx->flags = 78;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} GtXuGTtu_ctx_t;

void init_ctx(GtXuGTtu_ctx_t *ctx) {
    ctx->id = 9883;
    ctx->coefficient = 4.4;
    ctx->flags = 247;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} eMjWEyuZ_ctx_t;

void init_ctx(eMjWEyuZ_ctx_t *ctx) {
    ctx->id = 4978;
    ctx->coefficient = 6.0;
    ctx->flags = 149;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} irotWGhr_ctx_t;

void init_ctx(irotWGhr_ctx_t *ctx) {
    ctx->id = 2815;
    ctx->coefficient = 10.0;
    ctx->flags = 255;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} 2D3a0i8C_ctx_t;

void init_ctx(2D3a0i8C_ctx_t *ctx) {
    ctx->id = 7105;
    ctx->coefficient = 5.6;
    ctx->flags = 28;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} XjrITZ7P_ctx_t;

void init_ctx(XjrITZ7P_ctx_t *ctx) {
    ctx->id = 5204;
    ctx->coefficient = 6.6;
    ctx->flags = 30;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} bUwNMDli_ctx_t;

void init_ctx(bUwNMDli_ctx_t *ctx) {
    ctx->id = 8494;
    ctx->coefficient = 9.8;
    ctx->flags = 176;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} ib5b4Az7_ctx_t;

void init_ctx(ib5b4Az7_ctx_t *ctx) {
    ctx->id = 6937;
    ctx->coefficient = 5.7;
    ctx->flags = 5;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} FRQIxvTs_ctx_t;

void init_ctx(FRQIxvTs_ctx_t *ctx) {
    ctx->id = 9622;
    ctx->coefficient = 8.1;
    ctx->flags = 91;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} H5rKQL1m_ctx_t;

void init_ctx(H5rKQL1m_ctx_t *ctx) {
    ctx->id = 6423;
    ctx->coefficient = 0.6;
    ctx->flags = 178;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} XVtwUfIz_ctx_t;

void init_ctx(XVtwUfIz_ctx_t *ctx) {
    ctx->id = 7439;
    ctx->coefficient = 1.6;
    ctx->flags = 31;
}

int compute_BjqBPfJ(int input) {
    int result = input * 69;
    for(int i = 0; i < 7; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} WTvkK5nR_ctx_t;

void init_ctx(WTvkK5nR_ctx_t *ctx) {
    ctx->id = 5296;
    ctx->coefficient = 2.8;
    ctx->flags = 56;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} sUIddUPA_ctx_t;

void init_ctx(sUIddUPA_ctx_t *ctx) {
    ctx->id = 4734;
    ctx->coefficient = 8.3;
    ctx->flags = 157;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} xfAyYkY3_ctx_t;

void init_ctx(xfAyYkY3_ctx_t *ctx) {
    ctx->id = 1766;
    ctx->coefficient = 3.3;
    ctx->flags = 54;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} hVCrcZko_ctx_t;

void init_ctx(hVCrcZko_ctx_t *ctx) {
    ctx->id = 5031;
    ctx->coefficient = 8.4;
    ctx->flags = 39;
}

int compute_f9ya6U9(int input) {
    int result = input * 22;
    for(int i = 0; i < 6; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} mPwDxmZo_ctx_t;

void init_ctx(mPwDxmZo_ctx_t *ctx) {
    ctx->id = 1040;
    ctx->coefficient = 0.2;
    ctx->flags = 16;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} xqvAhtu1_ctx_t;

void init_ctx(xqvAhtu1_ctx_t *ctx) {
    ctx->id = 5148;
    ctx->coefficient = 1.1;
    ctx->flags = 122;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} qmheWlZZ_ctx_t;

void init_ctx(qmheWlZZ_ctx_t *ctx) {
    ctx->id = 5388;
    ctx->coefficient = 9.4;
    ctx->flags = 131;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} rnO2KA9Z_ctx_t;

void init_ctx(rnO2KA9Z_ctx_t *ctx) {
    ctx->id = 3610;
    ctx->coefficient = 9.4;
    ctx->flags = 133;
}

int compute_td3ppFM(int input) {
    int result = input * 43;
    for(int i = 0; i < 10; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} UnC6Xnn0_ctx_t;

void init_ctx(UnC6Xnn0_ctx_t *ctx) {
    ctx->id = 7227;
    ctx->coefficient = 3.4;
    ctx->flags = 136;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} MLdEXb1Y_ctx_t;

void init_ctx(MLdEXb1Y_ctx_t *ctx) {
    ctx->id = 3036;
    ctx->coefficient = 2.9;
    ctx->flags = 62;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} s1JmSCgz_ctx_t;

void init_ctx(s1JmSCgz_ctx_t *ctx) {
    ctx->id = 5902;
    ctx->coefficient = 8.6;
    ctx->flags = 155;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} XHgt2rrT_ctx_t;

void init_ctx(XHgt2rrT_ctx_t *ctx) {
    ctx->id = 9882;
    ctx->coefficient = 7.9;
    ctx->flags = 148;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} UPS00AQg_ctx_t;

void init_ctx(UPS00AQg_ctx_t *ctx) {
    ctx->id = 6073;
    ctx->coefficient = 6.7;
    ctx->flags = 33;
}

int compute_CNmIlSl(int input) {
    int result = input * 66;
    for(int i = 0; i < 9; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} aWF3FOVC_ctx_t;

void init_ctx(aWF3FOVC_ctx_t *ctx) {
    ctx->id = 5707;
    ctx->coefficient = 6.1;
    ctx->flags = 95;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} mLM38inX_ctx_t;

void init_ctx(mLM38inX_ctx_t *ctx) {
    ctx->id = 5834;
    ctx->coefficient = 0.7;
    ctx->flags = 222;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} sZuzNVP8_ctx_t;

void init_ctx(sZuzNVP8_ctx_t *ctx) {
    ctx->id = 5931;
    ctx->coefficient = 4.9;
    ctx->flags = 77;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} gFTmePMy_ctx_t;

void init_ctx(gFTmePMy_ctx_t *ctx) {
    ctx->id = 8113;
    ctx->coefficient = 4.6;
    ctx->flags = 42;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} wvex0iAd_ctx_t;

void init_ctx(wvex0iAd_ctx_t *ctx) {
    ctx->id = 8996;
    ctx->coefficient = 9.2;
    ctx->flags = 128;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} jCC5cOxU_ctx_t;

void init_ctx(jCC5cOxU_ctx_t *ctx) {
    ctx->id = 7190;
    ctx->coefficient = 9.8;
    ctx->flags = 5;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} eA36C5EN_ctx_t;

void init_ctx(eA36C5EN_ctx_t *ctx) {
    ctx->id = 6028;
    ctx->coefficient = 2.8;
    ctx->flags = 116;
}

int compute_P2g5HdI(int input) {
    int result = input * 4;
    for(int i = 0; i < 18; i++) result += (i * 2);
    return result;
}

int compute_UVTGbwH(int input) {
    int result = input * 6;
    for(int i = 0; i < 17; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} stqIlOpf_ctx_t;

void init_ctx(stqIlOpf_ctx_t *ctx) {
    ctx->id = 1568;
    ctx->coefficient = 5.3;
    ctx->flags = 20;
}

int compute_deTIAZ4(int input) {
    int result = input * 46;
    for(int i = 0; i < 18; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} lYwhGKsG_ctx_t;

void init_ctx(lYwhGKsG_ctx_t *ctx) {
    ctx->id = 4905;
    ctx->coefficient = 4.1;
    ctx->flags = 82;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} 2YFbbO4U_ctx_t;

void init_ctx(2YFbbO4U_ctx_t *ctx) {
    ctx->id = 8571;
    ctx->coefficient = 9.6;
    ctx->flags = 17;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} NBC88yIZ_ctx_t;

void init_ctx(NBC88yIZ_ctx_t *ctx) {
    ctx->id = 9437;
    ctx->coefficient = 8.4;
    ctx->flags = 100;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} XQAeeYsW_ctx_t;

void init_ctx(XQAeeYsW_ctx_t *ctx) {
    ctx->id = 8799;
    ctx->coefficient = 8.0;
    ctx->flags = 136;
}

int compute_WWO1VwB(int input) {
    int result = input * 41;
    for(int i = 0; i < 9; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} wMaVpygB_ctx_t;

void init_ctx(wMaVpygB_ctx_t *ctx) {
    ctx->id = 4932;
    ctx->coefficient = 6.8;
    ctx->flags = 115;
}

int compute_aL83yS7(int input) {
    int result = input * 10;
    for(int i = 0; i < 4; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} 9OE1O24Q_ctx_t;

void init_ctx(9OE1O24Q_ctx_t *ctx) {
    ctx->id = 7584;
    ctx->coefficient = 5.9;
    ctx->flags = 199;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} xIHdDngV_ctx_t;

void init_ctx(xIHdDngV_ctx_t *ctx) {
    ctx->id = 4748;
    ctx->coefficient = 4.9;
    ctx->flags = 38;
}

int compute_nxPEqkv(int input) {
    int result = input * 2;
    for(int i = 0; i < 8; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} 6mEZc4l3_ctx_t;

void init_ctx(6mEZc4l3_ctx_t *ctx) {
    ctx->id = 9001;
    ctx->coefficient = 0.4;
    ctx->flags = 142;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} SNRO3iK1_ctx_t;

void init_ctx(SNRO3iK1_ctx_t *ctx) {
    ctx->id = 9680;
    ctx->coefficient = 0.6;
    ctx->flags = 42;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} 7wA0U6ZQ_ctx_t;

void init_ctx(7wA0U6ZQ_ctx_t *ctx) {
    ctx->id = 2200;
    ctx->coefficient = 6.0;
    ctx->flags = 146;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} tKMEAdX8_ctx_t;

void init_ctx(tKMEAdX8_ctx_t *ctx) {
    ctx->id = 7632;
    ctx->coefficient = 5.4;
    ctx->flags = 31;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} l1RXYC63_ctx_t;

void init_ctx(l1RXYC63_ctx_t *ctx) {
    ctx->id = 9298;
    ctx->coefficient = 4.5;
    ctx->flags = 76;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} V1vr7mwj_ctx_t;

void init_ctx(V1vr7mwj_ctx_t *ctx) {
    ctx->id = 6407;
    ctx->coefficient = 9.3;
    ctx->flags = 97;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} Bl8Rjf3P_ctx_t;

void init_ctx(Bl8Rjf3P_ctx_t *ctx) {
    ctx->id = 9491;
    ctx->coefficient = 8.6;
    ctx->flags = 89;
}

int compute_NmGjsn0(int input) {
    int result = input * 54;
    for(int i = 0; i < 7; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} EpLJKCtm_ctx_t;

void init_ctx(EpLJKCtm_ctx_t *ctx) {
    ctx->id = 8272;
    ctx->coefficient = 4.7;
    ctx->flags = 94;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} Ylty9ngN_ctx_t;

void init_ctx(Ylty9ngN_ctx_t *ctx) {
    ctx->id = 4955;
    ctx->coefficient = 9.3;
    ctx->flags = 193;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} UWmOwfke_ctx_t;

void init_ctx(UWmOwfke_ctx_t *ctx) {
    ctx->id = 6205;
    ctx->coefficient = 5.6;
    ctx->flags = 222;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} k9PeJkM0_ctx_t;

void init_ctx(k9PeJkM0_ctx_t *ctx) {
    ctx->id = 1283;
    ctx->coefficient = 3.0;
    ctx->flags = 37;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} A7odHXMR_ctx_t;

void init_ctx(A7odHXMR_ctx_t *ctx) {
    ctx->id = 6328;
    ctx->coefficient = 6.2;
    ctx->flags = 119;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} Zt0HzBFU_ctx_t;

void init_ctx(Zt0HzBFU_ctx_t *ctx) {
    ctx->id = 6210;
    ctx->coefficient = 8.6;
    ctx->flags = 88;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} jpfOClCn_ctx_t;

void init_ctx(jpfOClCn_ctx_t *ctx) {
    ctx->id = 1045;
    ctx->coefficient = 7.0;
    ctx->flags = 224;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} YWxToszi_ctx_t;

void init_ctx(YWxToszi_ctx_t *ctx) {
    ctx->id = 7133;
    ctx->coefficient = 7.3;
    ctx->flags = 196;
}

int compute_2wupNTa(int input) {
    int result = input * 9;
    for(int i = 0; i < 15; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} 14uF2Pcv_ctx_t;

void init_ctx(14uF2Pcv_ctx_t *ctx) {
    ctx->id = 9980;
    ctx->coefficient = 6.4;
    ctx->flags = 18;
}

int compute_jdUHYgU(int input) {
    int result = input * 28;
    for(int i = 0; i < 4; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} vWHI6ne5_ctx_t;

void init_ctx(vWHI6ne5_ctx_t *ctx) {
    ctx->id = 7681;
    ctx->coefficient = 8.5;
    ctx->flags = 128;
}

int compute_XvBlEt5(int input) {
    int result = input * 26;
    for(int i = 0; i < 10; i++) result += (i * 2);
    return result;
}

int compute_mNOOwHT(int input) {
    int result = input * 57;
    for(int i = 0; i < 9; i++) result += (i * 3);
    return result;
}

int compute_FDHACy7(int input) {
    int result = input * 18;
    for(int i = 0; i < 5; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} b3ZJGF2D_ctx_t;

void init_ctx(b3ZJGF2D_ctx_t *ctx) {
    ctx->id = 3381;
    ctx->coefficient = 1.7;
    ctx->flags = 80;
}

int compute_SD4TWxt(int input) {
    int result = input * 49;
    for(int i = 0; i < 7; i++) result += (i * 3);
    return result;
}

int compute_10CC0tW(int input) {
    int result = input * 66;
    for(int i = 0; i < 12; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} 2nDvaNUU_ctx_t;

void init_ctx(2nDvaNUU_ctx_t *ctx) {
    ctx->id = 2659;
    ctx->coefficient = 9.9;
    ctx->flags = 99;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} wibWylPE_ctx_t;

void init_ctx(wibWylPE_ctx_t *ctx) {
    ctx->id = 9604;
    ctx->coefficient = 9.5;
    ctx->flags = 203;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} ZKPepbPM_ctx_t;

void init_ctx(ZKPepbPM_ctx_t *ctx) {
    ctx->id = 2292;
    ctx->coefficient = 8.1;
    ctx->flags = 224;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} tXJOKkDd_ctx_t;

void init_ctx(tXJOKkDd_ctx_t *ctx) {
    ctx->id = 9526;
    ctx->coefficient = 5.4;
    ctx->flags = 5;
}

int compute_fZuOT2K(int input) {
    int result = input * 60;
    for(int i = 0; i < 3; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} duhDSXGZ_ctx_t;

void init_ctx(duhDSXGZ_ctx_t *ctx) {
    ctx->id = 1842;
    ctx->coefficient = 5.9;
    ctx->flags = 186;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} dUM21bJf_ctx_t;

void init_ctx(dUM21bJf_ctx_t *ctx) {
    ctx->id = 4117;
    ctx->coefficient = 0.7;
    ctx->flags = 94;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} h7Bsy2Qi_ctx_t;

void init_ctx(h7Bsy2Qi_ctx_t *ctx) {
    ctx->id = 3508;
    ctx->coefficient = 9.7;
    ctx->flags = 127;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} Eu4cqWK1_ctx_t;

void init_ctx(Eu4cqWK1_ctx_t *ctx) {
    ctx->id = 9549;
    ctx->coefficient = 8.3;
    ctx->flags = 231;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} hmBAallC_ctx_t;

void init_ctx(hmBAallC_ctx_t *ctx) {
    ctx->id = 7200;
    ctx->coefficient = 8.4;
    ctx->flags = 58;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} rmyxo033_ctx_t;

void init_ctx(rmyxo033_ctx_t *ctx) {
    ctx->id = 9871;
    ctx->coefficient = 8.3;
    ctx->flags = 113;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} bMr4CLqg_ctx_t;

void init_ctx(bMr4CLqg_ctx_t *ctx) {
    ctx->id = 7496;
    ctx->coefficient = 3.1;
    ctx->flags = 104;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} AQM4giYI_ctx_t;

void init_ctx(AQM4giYI_ctx_t *ctx) {
    ctx->id = 8418;
    ctx->coefficient = 8.1;
    ctx->flags = 171;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} f2BfuO29_ctx_t;

void init_ctx(f2BfuO29_ctx_t *ctx) {
    ctx->id = 1662;
    ctx->coefficient = 5.8;
    ctx->flags = 97;
}

int compute_79imoZ5(int input) {
    int result = input * 45;
    for(int i = 0; i < 15; i++) result += (i * 4);
    return result;
}

int compute_q7KcGHc(int input) {
    int result = input * 17;
    for(int i = 0; i < 5; i++) result += (i * 3);
    return result;
}

int compute_TVF36En(int input) {
    int result = input * 16;
    for(int i = 0; i < 18; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} rCVs8PXy_ctx_t;

void init_ctx(rCVs8PXy_ctx_t *ctx) {
    ctx->id = 3239;
    ctx->coefficient = 1.2;
    ctx->flags = 247;
}

int compute_ABz1DbG(int input) {
    int result = input * 2;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} 89ZkMQ05_ctx_t;

void init_ctx(89ZkMQ05_ctx_t *ctx) {
    ctx->id = 3930;
    ctx->coefficient = 2.3;
    ctx->flags = 67;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} 6Kw4cksS_ctx_t;

void init_ctx(6Kw4cksS_ctx_t *ctx) {
    ctx->id = 9065;
    ctx->coefficient = 6.0;
    ctx->flags = 202;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} 6oxMLvUC_ctx_t;

void init_ctx(6oxMLvUC_ctx_t *ctx) {
    ctx->id = 6634;
    ctx->coefficient = 3.1;
    ctx->flags = 66;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} SFTEQtvy_ctx_t;

void init_ctx(SFTEQtvy_ctx_t *ctx) {
    ctx->id = 8431;
    ctx->coefficient = 8.8;
    ctx->flags = 48;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} BxvRWgyv_ctx_t;

void init_ctx(BxvRWgyv_ctx_t *ctx) {
    ctx->id = 2095;
    ctx->coefficient = 1.3;
    ctx->flags = 108;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} e489a4hH_ctx_t;

void init_ctx(e489a4hH_ctx_t *ctx) {
    ctx->id = 8606;
    ctx->coefficient = 7.6;
    ctx->flags = 115;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} kBDZO8g8_ctx_t;

void init_ctx(kBDZO8g8_ctx_t *ctx) {
    ctx->id = 1013;
    ctx->coefficient = 5.5;
    ctx->flags = 42;
}

int compute_y0mHEug(int input) {
    int result = input * 53;
    for(int i = 0; i < 6; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} NkPcwKkP_ctx_t;

void init_ctx(NkPcwKkP_ctx_t *ctx) {
    ctx->id = 6815;
    ctx->coefficient = 0.8;
    ctx->flags = 117;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} hX9OA7B7_ctx_t;

void init_ctx(hX9OA7B7_ctx_t *ctx) {
    ctx->id = 6338;
    ctx->coefficient = 7.0;
    ctx->flags = 145;
}

int compute_SApIvMl(int input) {
    int result = input * 21;
    for(int i = 0; i < 5; i++) result += (i * 4);
    return result;
}

int compute_e5jnsJw(int input) {
    int result = input * 64;
    for(int i = 0; i < 10; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} 6u8L4wX4_ctx_t;

void init_ctx(6u8L4wX4_ctx_t *ctx) {
    ctx->id = 4573;
    ctx->coefficient = 4.9;
    ctx->flags = 226;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} 5fuPmsOI_ctx_t;

void init_ctx(5fuPmsOI_ctx_t *ctx) {
    ctx->id = 2416;
    ctx->coefficient = 8.5;
    ctx->flags = 181;
}

int compute_9Fct8y4(int input) {
    int result = input * 21;
    for(int i = 0; i < 12; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} 2sE0q1ij_ctx_t;

void init_ctx(2sE0q1ij_ctx_t *ctx) {
    ctx->id = 7937;
    ctx->coefficient = 1.2;
    ctx->flags = 154;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} bu9TYN3J_ctx_t;

void init_ctx(bu9TYN3J_ctx_t *ctx) {
    ctx->id = 5818;
    ctx->coefficient = 3.8;
    ctx->flags = 141;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} 9dApfpr6_ctx_t;

void init_ctx(9dApfpr6_ctx_t *ctx) {
    ctx->id = 2703;
    ctx->coefficient = 0.1;
    ctx->flags = 189;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} LtP0NDNd_ctx_t;

void init_ctx(LtP0NDNd_ctx_t *ctx) {
    ctx->id = 6358;
    ctx->coefficient = 8.4;
    ctx->flags = 121;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} 07AXdgjA_ctx_t;

void init_ctx(07AXdgjA_ctx_t *ctx) {
    ctx->id = 2142;
    ctx->coefficient = 6.6;
    ctx->flags = 233;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} cAeaQqlZ_ctx_t;

void init_ctx(cAeaQqlZ_ctx_t *ctx) {
    ctx->id = 3357;
    ctx->coefficient = 6.4;
    ctx->flags = 130;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} 0CEmiak9_ctx_t;

void init_ctx(0CEmiak9_ctx_t *ctx) {
    ctx->id = 3339;
    ctx->coefficient = 5.6;
    ctx->flags = 228;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} ZXT59gVV_ctx_t;

void init_ctx(ZXT59gVV_ctx_t *ctx) {
    ctx->id = 1856;
    ctx->coefficient = 3.1;
    ctx->flags = 171;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} ePkhJqRK_ctx_t;

void init_ctx(ePkhJqRK_ctx_t *ctx) {
    ctx->id = 1019;
    ctx->coefficient = 5.3;
    ctx->flags = 242;
}

int compute_U6xMm4q(int input) {
    int result = input * 13;
    for(int i = 0; i < 13; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} WCifobKw_ctx_t;

void init_ctx(WCifobKw_ctx_t *ctx) {
    ctx->id = 6350;
    ctx->coefficient = 0.2;
    ctx->flags = 239;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} YJHxLXhy_ctx_t;

void init_ctx(YJHxLXhy_ctx_t *ctx) {
    ctx->id = 5436;
    ctx->coefficient = 7.5;
    ctx->flags = 193;
}

int compute_zVk2TsN(int input) {
    int result = input * 40;
    for(int i = 0; i < 8; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} Hch3kdE5_ctx_t;

void init_ctx(Hch3kdE5_ctx_t *ctx) {
    ctx->id = 9730;
    ctx->coefficient = 2.8;
    ctx->flags = 97;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} JyQGGl6q_ctx_t;

void init_ctx(JyQGGl6q_ctx_t *ctx) {
    ctx->id = 8211;
    ctx->coefficient = 8.7;
    ctx->flags = 74;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} 53d1sWyB_ctx_t;

void init_ctx(53d1sWyB_ctx_t *ctx) {
    ctx->id = 2427;
    ctx->coefficient = 3.3;
    ctx->flags = 63;
}

int compute_UQ08T2k(int input) {
    int result = input * 65;
    for(int i = 0; i < 15; i++) result += (i * 1);
    return result;
}

int compute_4opDJjt(int input) {
    int result = input * 25;
    for(int i = 0; i < 14; i++) result += (i * 2);
    return result;
}

int compute_GRNjfM4(int input) {
    int result = input * 43;
    for(int i = 0; i < 15; i++) result += (i * 5);
    return result;
}

int compute_cSG5Dk0(int input) {
    int result = input * 2;
    for(int i = 0; i < 6; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} nH57ZXnG_ctx_t;

void init_ctx(nH57ZXnG_ctx_t *ctx) {
    ctx->id = 9435;
    ctx->coefficient = 2.0;
    ctx->flags = 36;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} SRqaQn8r_ctx_t;

void init_ctx(SRqaQn8r_ctx_t *ctx) {
    ctx->id = 9326;
    ctx->coefficient = 2.3;
    ctx->flags = 107;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} 8xe9SzOx_ctx_t;

void init_ctx(8xe9SzOx_ctx_t *ctx) {
    ctx->id = 3732;
    ctx->coefficient = 5.3;
    ctx->flags = 99;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} oCLuKJf3_ctx_t;

void init_ctx(oCLuKJf3_ctx_t *ctx) {
    ctx->id = 8051;
    ctx->coefficient = 6.6;
    ctx->flags = 167;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} fTIyNi44_ctx_t;

void init_ctx(fTIyNi44_ctx_t *ctx) {
    ctx->id = 1219;
    ctx->coefficient = 4.3;
    ctx->flags = 176;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} YwIR4BYW_ctx_t;

void init_ctx(YwIR4BYW_ctx_t *ctx) {
    ctx->id = 4686;
    ctx->coefficient = 0.8;
    ctx->flags = 235;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} F9hKYs2f_ctx_t;

void init_ctx(F9hKYs2f_ctx_t *ctx) {
    ctx->id = 3601;
    ctx->coefficient = 7.4;
    ctx->flags = 149;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} EdoPUsEi_ctx_t;

void init_ctx(EdoPUsEi_ctx_t *ctx) {
    ctx->id = 5258;
    ctx->coefficient = 7.0;
    ctx->flags = 75;
}

int compute_wZEcxEv(int input) {
    int result = input * 70;
    for(int i = 0; i < 11; i++) result += (i * 4);
    return result;
}

int compute_JAi2rxZ(int input) {
    int result = input * 70;
    for(int i = 0; i < 17; i++) result += (i * 3);
    return result;
}

int compute_6Dp9VTw(int input) {
    int result = input * 47;
    for(int i = 0; i < 3; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} Ltkf9Z0D_ctx_t;

void init_ctx(Ltkf9Z0D_ctx_t *ctx) {
    ctx->id = 9002;
    ctx->coefficient = 2.3;
    ctx->flags = 53;
}

