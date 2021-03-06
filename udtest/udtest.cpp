#pragma comment(lib,"libudis86.lib")

#include <stdio.h>
#include "..\udis86.h"


const char* ud_opr_name(ud_type type) {
    switch (type)
    {
    case UD_NONE:
        break;
    case UD_R_AL:
        break;
    case UD_R_CL:
        break;
    case UD_R_DL:
        break;
    case UD_R_BL:
        break;
    case UD_R_AH:
        break;
    case UD_R_CH:
        break;
    case UD_R_DH:
        break;
    case UD_R_BH:
        break;
    case UD_R_SPL:
        break;
    case UD_R_BPL:
        break;
    case UD_R_SIL:
        break;
    case UD_R_DIL:
        break;
    case UD_R_R8B:
        break;
    case UD_R_R9B:
        break;
    case UD_R_R10B:
        break;
    case UD_R_R11B:
        break;
    case UD_R_R12B:
        break;
    case UD_R_R13B:
        break;
    case UD_R_R14B:
        break;
    case UD_R_R15B:
        break;
    case UD_R_AX:
        break;
    case UD_R_CX:
        break;
    case UD_R_DX:
        break;
    case UD_R_BX:
        break;
    case UD_R_SP:
        break;
    case UD_R_BP:
        break;
    case UD_R_SI:
        break;
    case UD_R_DI:
        break;
    case UD_R_R8W:
        break;
    case UD_R_R9W:
        break;
    case UD_R_R10W:
        break;
    case UD_R_R11W:
        break;
    case UD_R_R12W:
        break;
    case UD_R_R13W:
        break;
    case UD_R_R14W:
        break;
    case UD_R_R15W:
        break;
    case UD_R_EAX:
        break;
    case UD_R_ECX:
        break;
    case UD_R_EDX:
        break;
    case UD_R_EBX:
        break;
    case UD_R_ESP:
        break;
    case UD_R_EBP:
        break;
    case UD_R_ESI:
        break;
    case UD_R_EDI:
        break;
    case UD_R_R8D:
        break;
    case UD_R_R9D:
        break;
    case UD_R_R10D:
        break;
    case UD_R_R11D:
        break;
    case UD_R_R12D:
        break;
    case UD_R_R13D:
        break;
    case UD_R_R14D:
        break;
    case UD_R_R15D:
        break;
    case UD_R_RAX:
        break;
    case UD_R_RCX:
        break;
    case UD_R_RDX:
        break;
    case UD_R_RBX:
        break;
    case UD_R_RSP:
        break;
    case UD_R_RBP:
        break;
    case UD_R_RSI:
        break;
    case UD_R_RDI:
        break;
    case UD_R_R8:
        break;
    case UD_R_R9:
        break;
    case UD_R_R10:
        break;
    case UD_R_R11:
        break;
    case UD_R_R12:
        break;
    case UD_R_R13:
        break;
    case UD_R_R14:
        break;
    case UD_R_R15:
        break;
    case UD_R_ES:
        break;
    case UD_R_CS:
        break;
    case UD_R_SS:
        break;
    case UD_R_DS:
        break;
    case UD_R_FS:
        break;
    case UD_R_GS:
        break;
    case UD_R_CR0:
        break;
    case UD_R_CR1:
        break;
    case UD_R_CR2:
        break;
    case UD_R_CR3:
        break;
    case UD_R_CR4:
        break;
    case UD_R_CR5:
        break;
    case UD_R_CR6:
        break;
    case UD_R_CR7:
        break;
    case UD_R_CR8:
        break;
    case UD_R_CR9:
        break;
    case UD_R_CR10:
        break;
    case UD_R_CR11:
        break;
    case UD_R_CR12:
        break;
    case UD_R_CR13:
        break;
    case UD_R_CR14:
        break;
    case UD_R_CR15:
        break;
    case UD_R_DR0:
        break;
    case UD_R_DR1:
        break;
    case UD_R_DR2:
        break;
    case UD_R_DR3:
        break;
    case UD_R_DR4:
        break;
    case UD_R_DR5:
        break;
    case UD_R_DR6:
        break;
    case UD_R_DR7:
        break;
    case UD_R_DR8:
        break;
    case UD_R_DR9:
        break;
    case UD_R_DR10:
        break;
    case UD_R_DR11:
        break;
    case UD_R_DR12:
        break;
    case UD_R_DR13:
        break;
    case UD_R_DR14:
        break;
    case UD_R_DR15:
        break;
    case UD_R_MM0:
        break;
    case UD_R_MM1:
        break;
    case UD_R_MM2:
        break;
    case UD_R_MM3:
        break;
    case UD_R_MM4:
        break;
    case UD_R_MM5:
        break;
    case UD_R_MM6:
        break;
    case UD_R_MM7:
        break;
    case UD_R_ST0:
        break;
    case UD_R_ST1:
        break;
    case UD_R_ST2:
        break;
    case UD_R_ST3:
        break;
    case UD_R_ST4:
        break;
    case UD_R_ST5:
        break;
    case UD_R_ST6:
        break;
    case UD_R_ST7:
        break;
    case UD_R_XMM0:
        break;
    case UD_R_XMM1:
        break;
    case UD_R_XMM2:
        break;
    case UD_R_XMM3:
        break;
    case UD_R_XMM4:
        break;
    case UD_R_XMM5:
        break;
    case UD_R_XMM6:
        break;
    case UD_R_XMM7:
        break;
    case UD_R_XMM8:
        break;
    case UD_R_XMM9:
        break;
    case UD_R_XMM10:
        break;
    case UD_R_XMM11:
        break;
    case UD_R_XMM12:
        break;
    case UD_R_XMM13:
        break;
    case UD_R_XMM14:
        break;
    case UD_R_XMM15:
        break;
    case UD_R_YMM0:
        break;
    case UD_R_YMM1:
        break;
    case UD_R_YMM2:
        break;
    case UD_R_YMM3:
        break;
    case UD_R_YMM4:
        break;
    case UD_R_YMM5:
        break;
    case UD_R_YMM6:
        break;
    case UD_R_YMM7:
        break;
    case UD_R_YMM8:
        break;
    case UD_R_YMM9:
        break;
    case UD_R_YMM10:
        break;
    case UD_R_YMM11:
        break;
    case UD_R_YMM12:
        break;
    case UD_R_YMM13:
        break;
    case UD_R_YMM14:
        break;
    case UD_R_YMM15:
        break;
    case UD_R_RIP:
        return "UD_R_RIP";
    case UD_OP_REG:
        return "UD_OP_REG";
    case UD_OP_MEM:
        return "UD_OP_MEM";
    case UD_OP_PTR:
        return "UD_OP_PTR";
    case UD_OP_IMM:
        return "UD_OP_IMM";
    case UD_OP_JIMM:
        return "UD_OP_JIMM";
    case UD_OP_CONST:
        return "UD_OP_CONST";
    default:
        break;
    }
    return "UNKNOWN";
}

#include <string.h>
#include <time.h>
#include <stdlib.h>


size_t udx_gen_sig(uint8_t* mem_buffer, size_t mem_buffer_size,
    char* sig_buffer, size_t sig_buffer_size, size_t insn_size, enum ud_match_lvl match_lvl) {
    ud_t ud_obj; 
    ud_init(&ud_obj);
    ud_set_input_buffer(&ud_obj, mem_buffer, mem_buffer_size);
    ud_set_mode(&ud_obj, 32);
    size_t insn_size_readed = 0, insn_sig_size, sig_size = 0;
    const char* insn_sig; 
    memset(sig_buffer, 0, sig_buffer_size);
    while (ud_disassemble(&ud_obj)) {
        insn_sig = ud_insn_hex_sig(&ud_obj, match_lvl);
        insn_sig_size = strlen(insn_sig);
        if (strcat_s(sig_buffer, sig_buffer_size, insn_sig)) return 0;
        sig_size += insn_sig_size;
        sig_buffer += insn_sig_size;
        sig_buffer_size -= insn_sig_size;
        if (++insn_size_readed >= insn_size) break;
    }
    return sig_size;
}
size_t udx_gen_sig_rnd(uint8_t* mem_buffer, size_t mem_buffer_size,
    char* sig_buffer, size_t sig_buffer_size, size_t insn_size) { 
    ud_t ud_obj;
    ud_init(&ud_obj);
    ud_set_input_buffer(&ud_obj, mem_buffer, mem_buffer_size);
    ud_set_mode(&ud_obj, 32);
    size_t insn_size_readed = 0, insn_sig_size, sig_size = 0;
    const char* insn_sig;
    memset(sig_buffer, 0, sig_buffer_size);
    while (ud_disassemble(&ud_obj)) {
        insn_sig = ud_insn_hex_sig(&ud_obj, (ud_match_lvl_t)(rand() % UD_MATCH_ALL));
        insn_sig_size = strlen(insn_sig);
        if (strcat_s(sig_buffer, sig_buffer_size, insn_sig)) return 0;
        sig_size += insn_sig_size;
        sig_buffer += insn_sig_size;
        sig_buffer_size -= insn_sig_size;
        if (++insn_size_readed >= insn_size) break;
    }
    return sig_size;
}



int main()
{ 

    uint8_t data[] = 
    {
       0x55, 0x8B, 0xEC, 0x83, 0xEC, 0x08, 0xFF, 0x75, 0x08, 0xE8, 0x72, 0xFE, 0xFF, 0xFF, 0x8D, 0x4D,
       0x08, 0xC7, 0x45, 0x08, 0x04, 0x00, 0x00, 0x00, 0x51, 0x8D, 0x4D, 0xF8, 0x51, 0x8D, 0x4D, 0xFC,
       0x51, 0x6A, 0x00, 0xFF, 0x75, 0x0C, 0x50, 0xFF, 0x15, 0xE8, 0xB8, 0xC6, 0x03, 0x85, 0xC0, 0x75,
       0x19, 0x83, 0x7D, 0xFC, 0x04, 0x75, 0x13, 0x83, 0x7D, 0x08, 0x04, 0x75, 0x0D, 0x8B, 0x45, 0xF8,
       0x3B, 0x45, 0x14, 0x7C, 0x05, 0x3B, 0x45, 0x18, 0x7E, 0x03, 0x8B, 0x45, 0x10, 0x8B, 0xE5, 0x5D,
       0xC2, 0x14, 0x00, 0x8B, 0x84, 0x81, 0x7C, 0x01, 0x00, 0x00, 0x3E, 0x8B, 0x84, 0x85, 0x7C, 0x01,
       0x00, 0x00, 0xC7, 0x84, 0x80, 0x44, 0x33, 0x22, 0x11, 0x88, 0x77, 0x66, 0x55, 0x3E, 0xC7, 0x84,
       0x8D, 0x44, 0x33, 0x22, 0x11, 0x88, 0x77, 0x66, 0x55, 0x8B, 0x04, 0x24, 0xA1, 0x30, 0x41, 0xAB,
       0x00, 0x75, 0xF0, 0xB8, 0x00, 0x00, 0x00, 0x11, 0x8B, 0xC1, 0x89, 0x43, 0x0C, 0x90, 0xCC, 0xCC
    };

    srand(time(0));
    char sig_buffer[256];
    for (size_t i = 0; i < 50; i++) {
        udx_gen_sig_rnd(data, sizeof(data), sig_buffer, sizeof(sig_buffer), 8 + rand() % 8);
        printf("%s\n", sig_buffer);
    }


    /*ud_t ud_obj;

    ud_init(&ud_obj);
    ud_set_input_buffer(&ud_obj, data, sizeof(data));
    ud_set_mode(&ud_obj, 32);
    ud_set_syntax(&ud_obj, UD_SYN_INTEL);
    ud_set_pc(&ud_obj, 0x012FAC60);
    while (ud_disassemble(&ud_obj)) {
        printf("0x%08llX(%d)\t%s\n", ud_insn_off(&ud_obj), ud_insn_len(&ud_obj), ud_insn_asm(&ud_obj));
        printf("\t\tRaw:\t%s\n", ud_insn_hex(&ud_obj)); 
        printf("\t\tSig(A):\t%s\n", ud_insn_hex_sig(&ud_obj, UD_MATCH_ALL));
        printf("\t\tSig(H):\t%s\n", ud_insn_hex_sig(&ud_obj, UD_MATCH_HIGH));
        printf("\t\tSig(M):\t%s\n", ud_insn_hex_sig(&ud_obj, UD_MATCH_MID));
        printf("\t\tSig(L):\t%s\n", ud_insn_hex_sig(&ud_obj, UD_MATCH_LOW));
        printf("\t\tSig(N):\t%s\n", ud_insn_hex_sig(&ud_obj, UD_MATCH_NONE));

        if (ud_obj.have_modrm) {
            printf("\t\tModR/M:\t0x%X(%d)\n", ud_obj.modrm, ud_obj.modrm_offset);
        }
        else {
            printf("\t\tModR/M:\tNONE\n");
        }
        if (ud_obj.have_sib) {
            printf("\t\tSIB:\t0x%X(%d)\n", ud_obj.sib, ud_obj.sib_offset);
        }
        else {
            printf("\t\tSIB:\tNONE\n");
        }
        if (ud_obj.have_disp) {
            printf("\t\tDISP:\t0x%llX(%d, %d)\n", ud_obj.disp, ud_obj.disp_offset, ud_obj.disp_size);
        }
        else {
            printf("\t\tDISP:\tNONE\n");
        }
        if (ud_obj.have_imm) {
            printf("\t\tIMM:\t0x%llX(%d, %d)\n", ud_obj.imm, ud_obj.imm_offset, ud_obj.imm_size);
        }
        else {
            printf("\t\tIMM:\tNONE\n");
        }
        printf("\t\tSTB:\t%d\n", ud_obj.modrm_stb);
        printf("\n");
    }*/

    return 0;
}