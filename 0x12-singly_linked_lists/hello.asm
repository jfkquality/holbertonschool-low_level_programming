
a.out:     file format elf64-x86-64


Disassembly of section .text:

0000000000400440 <_start>:
  400440:	31 ed                	xor    ebp,ebp
  400442:	49 89 d1             	mov    r9,rdx
  400445:	5e                   	pop    rsi
  400446:	48 89 e2             	mov    rdx,rsp
  400449:	48 83 e4 f0          	and    rsp,0xfffffffffffffff0
  40044d:	50                   	push   rax
  40044e:	54                   	push   rsp
  40044f:	49 c7 c0 c0 05 40 00 	mov    r8,0x4005c0
  400456:	48 c7 c1 50 05 40 00 	mov    rcx,0x400550
  40045d:	48 c7 c7 2d 05 40 00 	mov    rdi,0x40052d
  400464:	e8 b7 ff ff ff       	call   400420 <__libc_start_main@plt>
  400469:	f4                   	hlt    
  40046a:	66 0f 1f 44 00 00    	nop    WORD PTR [rax+rax*1+0x0]

0000000000400470 <deregister_tm_clones>:
  400470:	b8 47 10 60 00       	mov    eax,0x601047
  400475:	55                   	push   rbp
  400476:	48 2d 40 10 60 00    	sub    rax,0x601040
  40047c:	48 83 f8 0e          	cmp    rax,0xe
  400480:	48 89 e5             	mov    rbp,rsp
  400483:	77 02                	ja     400487 <deregister_tm_clones+0x17>
  400485:	5d                   	pop    rbp
  400486:	c3                   	ret    
  400487:	b8 00 00 00 00       	mov    eax,0x0
  40048c:	48 85 c0             	test   rax,rax
  40048f:	74 f4                	je     400485 <deregister_tm_clones+0x15>
  400491:	5d                   	pop    rbp
  400492:	bf 40 10 60 00       	mov    edi,0x601040
  400497:	ff e0                	jmp    rax
  400499:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [rax+0x0]

00000000004004a0 <register_tm_clones>:
  4004a0:	b8 40 10 60 00       	mov    eax,0x601040
  4004a5:	55                   	push   rbp
  4004a6:	48 2d 40 10 60 00    	sub    rax,0x601040
  4004ac:	48 c1 f8 03          	sar    rax,0x3
  4004b0:	48 89 e5             	mov    rbp,rsp
  4004b3:	48 89 c2             	mov    rdx,rax
  4004b6:	48 c1 ea 3f          	shr    rdx,0x3f
  4004ba:	48 01 d0             	add    rax,rdx
  4004bd:	48 d1 f8             	sar    rax,1
  4004c0:	75 02                	jne    4004c4 <register_tm_clones+0x24>
  4004c2:	5d                   	pop    rbp
  4004c3:	c3                   	ret    
  4004c4:	ba 00 00 00 00       	mov    edx,0x0
  4004c9:	48 85 d2             	test   rdx,rdx
  4004cc:	74 f4                	je     4004c2 <register_tm_clones+0x22>
  4004ce:	5d                   	pop    rbp
  4004cf:	48 89 c6             	mov    rsi,rax
  4004d2:	bf 40 10 60 00       	mov    edi,0x601040
  4004d7:	ff e2                	jmp    rdx
  4004d9:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [rax+0x0]

00000000004004e0 <__do_global_dtors_aux>:
  4004e0:	80 3d 59 0b 20 00 00 	cmp    BYTE PTR [rip+0x200b59],0x0        # 601040 <__TMC_END__>
  4004e7:	75 11                	jne    4004fa <__do_global_dtors_aux+0x1a>
  4004e9:	55                   	push   rbp
  4004ea:	48 89 e5             	mov    rbp,rsp
  4004ed:	e8 7e ff ff ff       	call   400470 <deregister_tm_clones>
  4004f2:	5d                   	pop    rbp
  4004f3:	c6 05 46 0b 20 00 01 	mov    BYTE PTR [rip+0x200b46],0x1        # 601040 <__TMC_END__>
  4004fa:	f3 c3                	repz ret 
  4004fc:	0f 1f 40 00          	nop    DWORD PTR [rax+0x0]

0000000000400500 <frame_dummy>:
  400500:	48 83 3d 18 09 20 00 	cmp    QWORD PTR [rip+0x200918],0x0        # 600e20 <__JCR_END__>
  400507:	00 
  400508:	74 1e                	je     400528 <frame_dummy+0x28>
  40050a:	b8 00 00 00 00       	mov    eax,0x0
  40050f:	48 85 c0             	test   rax,rax
  400512:	74 14                	je     400528 <frame_dummy+0x28>
  400514:	55                   	push   rbp
  400515:	bf 20 0e 60 00       	mov    edi,0x600e20
  40051a:	48 89 e5             	mov    rbp,rsp
  40051d:	ff d0                	call   rax
  40051f:	5d                   	pop    rbp
  400520:	e9 7b ff ff ff       	jmp    4004a0 <register_tm_clones>
  400525:	0f 1f 00             	nop    DWORD PTR [rax]
  400528:	e9 73 ff ff ff       	jmp    4004a0 <register_tm_clones>

000000000040052d <main>:
  40052d:	55                   	push   rbp
  40052e:	48 89 e5             	mov    rbp,rsp
  400531:	bf d4 05 40 00       	mov    edi,0x4005d4
  400536:	e8 d5 fe ff ff       	call   400410 <puts@plt>
  40053b:	b8 00 00 00 00       	mov    eax,0x0
  400540:	5d                   	pop    rbp
  400541:	c3                   	ret    
  400542:	66 2e 0f 1f 84 00 00 	nop    WORD PTR cs:[rax+rax*1+0x0]
  400549:	00 00 00 
  40054c:	0f 1f 40 00          	nop    DWORD PTR [rax+0x0]

0000000000400550 <__libc_csu_init>:
  400550:	41 57                	push   r15
  400552:	41 89 ff             	mov    r15d,edi
  400555:	41 56                	push   r14
  400557:	49 89 f6             	mov    r14,rsi
  40055a:	41 55                	push   r13
  40055c:	49 89 d5             	mov    r13,rdx
  40055f:	41 54                	push   r12
  400561:	4c 8d 25 a8 08 20 00 	lea    r12,[rip+0x2008a8]        # 600e10 <__frame_dummy_init_array_entry>
  400568:	55                   	push   rbp
  400569:	48 8d 2d a8 08 20 00 	lea    rbp,[rip+0x2008a8]        # 600e18 <__init_array_end>
  400570:	53                   	push   rbx
  400571:	4c 29 e5             	sub    rbp,r12
  400574:	31 db                	xor    ebx,ebx
  400576:	48 c1 fd 03          	sar    rbp,0x3
  40057a:	48 83 ec 08          	sub    rsp,0x8
  40057e:	e8 5d fe ff ff       	call   4003e0 <_init>
  400583:	48 85 ed             	test   rbp,rbp
  400586:	74 1e                	je     4005a6 <__libc_csu_init+0x56>
  400588:	0f 1f 84 00 00 00 00 	nop    DWORD PTR [rax+rax*1+0x0]
  40058f:	00 
  400590:	4c 89 ea             	mov    rdx,r13
  400593:	4c 89 f6             	mov    rsi,r14
  400596:	44 89 ff             	mov    edi,r15d
  400599:	41 ff 14 dc          	call   QWORD PTR [r12+rbx*8]
  40059d:	48 83 c3 01          	add    rbx,0x1
  4005a1:	48 39 eb             	cmp    rbx,rbp
  4005a4:	75 ea                	jne    400590 <__libc_csu_init+0x40>
  4005a6:	48 83 c4 08          	add    rsp,0x8
  4005aa:	5b                   	pop    rbx
  4005ab:	5d                   	pop    rbp
  4005ac:	41 5c                	pop    r12
  4005ae:	41 5d                	pop    r13
  4005b0:	41 5e                	pop    r14
  4005b2:	41 5f                	pop    r15
  4005b4:	c3                   	ret    
  4005b5:	66 66 2e 0f 1f 84 00 	data32 nop WORD PTR cs:[rax+rax*1+0x0]
  4005bc:	00 00 00 00 

00000000004005c0 <__libc_csu_fini>:
  4005c0:	f3 c3                	repz ret 
