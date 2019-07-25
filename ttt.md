
```
[root@naqf-main04 ~]# qstat -a

naqf-main04: 
                                                            Req'd  Req'd   Elap
Job ID          Username Queue    Jobname    SessID NDS TSK Memory Time  S Time
--------------- -------- -------- ---------- ------ --- --- ------ ----- - -----
1871052.naqf-ma Baqf-mod camxq    CAMx_UM_09  30605   1  28    --    --  R 01:20
1871206.naqf-ma aqf-mode workq    CMAQ_GFS_0   9134   3  72    --    --  R 00:00
[root@naqf-main04 ~]# qstat -s

naqf-main04: 
                                                            Req'd  Req'd   Elap
Job ID          Username Queue    Jobname    SessID NDS TSK Memory Time  S Time
--------------- -------- -------- ---------- ------ --- --- ------ ----- - -----
1871052.naqf-ma Baqf-mod camxq    CAMx_UM_09  30605   1  28    --    --  R 01:20
   Job run at Thu Jul 25 at 10:16 on (naqf-gib45:ncpus=28)
1871206.naqf-ma aqf-mode workq    CMAQ_GFS_0   9134   3  72    --    --  R 00:01
   Job run at Thu Jul 25 at 11:35 on (naqf-gib23:ncpus=24)+(naqf-gib24:ncp...
1871208.naqf-ma Baqf-mod dacq     CCTM_new3   22019   3  72    --    --  R 00:00
   Job run at Thu Jul 25 at 11:36 on (naqf-gib36:ncpus=24)+(naqf-gib37:ncp...
[root@naqf-main04 ~]# qstat -n

naqf-main04: 
                                                            Req'd  Req'd   Elap
Job ID          Username Queue    Jobname    SessID NDS TSK Memory Time  S Time
--------------- -------- -------- ---------- ------ --- --- ------ ----- - -----
1871052.naqf-ma Baqf-mod camxq    CAMx_UM_09  30605   1  28    --    --  R 01:20
   naqf-gib45/0*28
1871206.naqf-ma aqf-mode workq    CMAQ_GFS_0   9134   3  72    --    --  R 00:02
   naqf-gib23/0*24+naqf-gib24/0*24+naqf-gib26/0*24
[root@naqf-main04 ~]# qstat -w

naqf-main04: 
                                                                                                   Req'd  Req'd   Elap
Job ID                         Username        Queue           Jobname         SessID   NDS  TSK   Memory Time  S Time
------------------------------ --------------- --------------- --------------- -------- ---- ----- ------ ----- - -----
1871052.naqf-main04            Baqf-model5     camxq           CAMx_UM_09h          --   --    --     --    --  R 01:20:32
1871206.naqf-main04            aqf-model1      workq           CMAQ_GFS_09h         --   --    --     --    --  R 00:02:31
[root@naqf-main04 ~]# qstat -f
Job Id: 1871052.naqf-main04
    Job_Name = CAMx_UM_09h
    Job_Owner = Baqf-model5@naqf-main04
    resources_used.cpupercent = 0
    resources_used.cput = 00:00:01
    resources_used.mem = 5944kb
    resources_used.ncpus = 28
    resources_used.vmem = 446148kb
    resources_used.walltime = 01:20:32
    job_state = R
    queue = camxq
    server = naqf-main04
    Checkpoint = u
    ctime = Thu Jul 25 10:16:05 2019
    Error_Path = naqf-main04:/data1/Baqf5/aqf/run_model/camx/v6.20/Runscripts/C
	AMx_UM_09h.e1871052
    exec_host = naqf-gib45/0*28
    exec_vnode = (naqf-gib45:ncpus=28)
    Hold_Types = n
    Join_Path = n
    Keep_Files = n
    Mail_Points = a
    mtime = Thu Jul 25 10:16:05 2019
    Output_Path = naqf-main04:/data1/Baqf5/aqf/run_model/camx/v6.20/Runscripts/
	CAMx_UM_09h.o1871052
    Priority = 0
    qtime = Thu Jul 25 10:16:05 2019
    Rerunable = True
    Resource_List.mpiprocs = 28
    Resource_List.ncpus = 28
    Resource_List.nodect = 1
    Resource_List.place = free
    Resource_List.select = 1:ncpus=28:mpiprocs=28
    schedselect = 1:ncpus=28:mpiprocs=28
    stime = Thu Jul 25 10:16:05 2019
    session_id = 30605
    jobdir = /data1/Baqf5
    substate = 42
    Variable_List = LS_COLORS=,
	INTEL_LICENSE_FILE=/data/data1/apps/compiler/intel/License/server.lic,
	MM0=07,NETCDF=/data/data1/apps/pgi/netcdf/3.6.3,
	EGO_LOCAL_CONFDIR=/shared/ibm/platform_lsf/conf/ego/phpc_cluster/kerne
	l,PBS_O_LANG=en_US.UTF-8,
	LM_LICENSE_FILE=/data/data1/apps/compiler/pgi/license.dat,
	HOME=/data1/Baqf5,NCVIEW=/data/data1/apps/pgi/ncview/2.1.2/bin,
	LD_LIBRARY_PATH=/shared/ibm/platform_lsf/9.1/linux2.6-glibc2.3-x86_64/
	lib,LANG=en_US.UTF-8,
	LSF_SERVERDIR=/shared/ibm/platform_lsf/9.1/linux2.6-glibc2.3-x86_64/et
	c,SHELL=/bin/sh,
	EGO_BINDIR=/shared/ibm/platform_lsf/9.1/linux2.6-glibc2.3-x86_64/bin,
	G_BROKEN_FILENAMES=1,MM_I=07,JDAY=206,NO_STOP_MESSAGE=yes,
	MANPATH=/shared/ibm/platform_lsf/9.1/man:,OSTYPE=linux,KYR=19,
	PBS_O_SYSTEM=Linux,VENDOR=unknown,
	IDL_STARTUP=/data1/Baqf5/.idl/idl_startup,HOST=naqf-main04,
	EGO_TOP=/shared/ibm/platform_lsf,DAY0=25,
	NCL_COMMAND=/usr/local/ncl_ncarg/612/gcc446/bin,
	EGO_ESRVDIR=/shared/ibm/platform_lsf/conf/ego/phpc_cluster/eservice,
	AQF_MODEL=AQF_UM,
	LSF_BINDIR=/shared/ibm/platform_lsf/9.1/linux2.6-glibc2.3-x86_64/bin,
	JRE=/usr/java/jre1.7.0_67,YYR=2019,MET=AQFv1,
	PBS_O_WORKDIR=/data1/Baqf5/aqf/run_model/camx/v6.20/Runscripts,
	MAIL=/var/spool/mail/Baqf-model5,MACHTYPE=x86_64,YEAR_I=2019,GROUP=aqf,
	PBS_O_HOME=/data1/Baqf5,
	EGO_CONFDIR=/shared/ibm/platform_lsf/conf/ego/phpc_cluster/kernel,
	YEAR0=2019,HOSTTYPE=x86_64-linux,LESSOPEN=|/usr/bin/lesspipe.sh %s,
	PBS_O_LOGNAME=Baqf-model5,CVS_RSH=ssh,LOGNAME=Baqf-model5,
	USER=Baqf-model5,LSF_ENVDIR=/shared/ibm/platform_lsf/conf,
	PATH=/shared/ibm/platform_lsf/9.1/linux2.6-glibc2.3-x86_64/etc:/shared
	/ibm/platform_lsf/9.1/linux2.6-glibc2.3-x86_64/bin:/data/data1/apps/pgi
	/ncview/2.1.2/bin:/usr/local/ncl_ncarg/612/gcc446/bin:/usr/local/ncl_nc
	arg/612/gcc446/bin:/data/data1/apps/pgi/netcdf/3.6.3/bin:/usr/java/jre1
	.7.0_67/bin:/data/data1/apps/lib_askanet/pgi/mvapich2/2.0/bin:/data/dat
	a1/apps/compiler/pgi/linux86-64/14.9/bin:/opt/pbs/default/bin:/usr/bin:
	/bin:/opt/ibutils/bin:/opt/pbs/bin:.:/data1/Baqf5/bin:/opt/pbs/default/
	bin:.:/usr/local/nco/4.2.1/bin,IDL_DML_PATH=/data1/Baqf5/.idl/mydlm,
	CYR=2019,DAY_I=24,
	MPIPATH=/data/data1/apps/lib_askanet/pgi/mvapich2/2.0,NTH=1,SHLVL=4,
	LSF_LIBDIR=/shared/ibm/platform_lsf/9.1/linux2.6-glibc2.3-x86_64/lib,
	PGI=/data/data1/apps/compiler/pgi,AJ_CDAY=20190725,
	PBS_O_PATH=/shared/ibm/platform_lsf/9.1/linux2.6-glibc2.3-x86_64/etc:/
	shared/ibm/platform_lsf/9.1/linux2.6-glibc2.3-x86_64/bin:/data/data1/ap
	ps/pgi/ncview/2.1.2/bin:/usr/local/ncl_ncarg/612/gcc446/bin:/usr/local/
	ncl_ncarg/612/gcc446/bin:/data/data1/apps/pgi/netcdf/3.6.3/bin:/usr/jav
	a/jre1.7.0_67/bin:/data/data1/apps/lib_askanet/pgi/mvapich2/2.0/bin:/da
	ta/data1/apps/compiler/pgi/linux86-64/14.9/bin:/opt/pbs/default/bin:/us
	r/bin:/bin:/opt/ibutils/bin:/opt/pbs/bin:.:/data1/Baqf5/bin:/opt/pbs/de
	fault/bin:.:/usr/local/nco/4.2.1/bin,MODULESHOME=/usr/share/Modules,
	profile=N,PBS=/opt/pbs/default,GRID=KNU_09_01,YDAY=0724,
	PBS_O_MAIL=/var/spool/mail/Baqf-model5,
	_=/data/data1/Baqf5/aqf/run_model_72hrs/control/run.AQF.09h_4CAMX_AQF.
	cron.csh,MODULEPATH=/usr/share/Modules/modulefiles:/etc/modulefiles,
	PBS_O_SHELL=/bin/sh,
	EGO_SERVERDIR=/shared/ibm/platform_lsf/9.1/linux2.6-glibc2.3-x86_64/et
	c,LOADEDMODULES=,
	EGO_LIBDIR=/shared/ibm/platform_lsf/9.1/linux2.6-glibc2.3-x86_64/lib,
	CDAY=0725,FCTIME=09h,
	PWD=/data1/Baqf5/aqf/run_model/camx/v6.20/Runscripts,
	NCO=/usr/local/ncl_ncarg/612/gcc446/include,
	NCARG_ROOT=/usr/local/ncl_ncarg/612/gcc446,PBS_O_QUEUE=camxq,
	PBS_O_HOST=naqf-main04
    euser = Baqf-model5
    egroup = aqf
    hashname = 1871052.naqf-main04
    queue_rank = 1564017365144
    queue_type = E
    comment = Job run at Thu Jul 25 at 10:16 on (naqf-gib45:ncpus=28)
    etime = Thu Jul 25 10:16:05 2019
    block = True
    run_count = 1
    Submit_arguments = -N CAMx_UM_09h -q camxq -l select=1:ncpus=28:mpiprocs=28
	 -Wblock=true -V ./CAMx_v6.20.EASIA.27.09.L18.mvapch_PSAT.job
    project = _pbs_project_default
    run_version = 1

Job Id: 1871206.naqf-main04
    Job_Name = CMAQ_GFS_09h
    Job_Owner = aqf-model1@naqf-main01
    resources_used.cpupercent = 0
    resources_used.cput = 00:00:00
    resources_used.mem = 6136kb
    resources_used.ncpus = 72
    resources_used.vmem = 355204kb
    resources_used.walltime = 00:02:31
    job_state = R
    queue = workq
    server = naqf-main04
    Checkpoint = u
    ctime = Thu Jul 25 11:35:24 2019
    Error_Path = naqf-main01:/data1/aqf/aqf_pbs/run_model/cmaq/CMAQ_GFS_09h.e18
	71206
    exec_host = naqf-gib23/0*24+naqf-gib24/0*24+naqf-gib26/0*24
    exec_vnode = (naqf-gib23:ncpus=24)+(naqf-gib24:ncpus=24)+(naqf-gib26:ncpus=
	24)
    Hold_Types = n
    Join_Path = oe
    Keep_Files = n
    Mail_Points = a
    mtime = Thu Jul 25 11:35:24 2019
    Output_Path = naqf-main01:/data/data1/aqf1/aqf_pbs/run_model/control/pbs_lo
	g/09h/20190725/cmaq_cctm_KNU_27_01.4.out
    Priority = 0
    qtime = Thu Jul 25 11:35:24 2019
    Rerunable = True
    Resource_List.mpiprocs = 72
    Resource_List.ncpus = 72
    Resource_List.nodect = 3
    Resource_List.place = free
    Resource_List.select = 3:ncpus=24:mpiprocs=24
    schedselect = 3:ncpus=24:mpiprocs=24
    stime = Thu Jul 25 11:35:24 2019
    session_id = 9134
    jobdir = /data1/aqf
    substate = 42
    Variable_List = PERL_BADLANG=0,
	INTEL_LICENSE_FILE=/data/data1/apps/compiler/intel/composer_xe_2015.0.
	090/licenses:/opt/intel/licenses:/data1/aqf/intel/licenses:/data/data1/
	apps/compiler/intel/License/server.lic,MM0=07,
	IDL_DIR=/data1/apps/exelis/idl,
	EGO_LOCAL_CONFDIR=/shared/ibm/platform_lsf/conf/ego/phpc_cluster/kerne
	l,IPPROOT=/data/data1/apps/compiler/intel/composer_xe_2015.0.090/ipp,
	PBS_O_LANG=en_US.UTF-8,
	LM_LICENSE_FILE=/data/data1/apps/compiler/pgi/license.dat,
	MPM_LAUNCHER=/data/data1/apps/compiler/intel/composer_xe_2015.0.090/de
	bugger/mpm/bin/start_mpm.sh,HOME=/data1/aqf,
	PGI=/data/data1/apps/compiler/pgi,
	NCVIEW=/data/data1/apps/pgi/ncview/2.1.2/bin,
	LD_LIBRARY_PATH=/data/data1/apps/compiler/intel/composer_xe_2015.0.090
	/compiler/lib/intel64:/data/data1/apps/compiler/intel/composer_xe_2015.
	0.090/mpirt/lib/intel64:/data/data1/apps/compiler/intel/composer_xe_201
	5.0.090/ipp/../compiler/lib/intel64:/data/data1/apps/compiler/intel/com
	poser_xe_2015.0.090/ipp/lib/intel64:/data/data1/apps/compiler/intel/com
	poser_xe_2015.0.090/compiler/lib/intel64:/data/data1/apps/compiler/inte
	l/composer_xe_2015.0.090/mkl/lib/intel64:/data/data1/apps/compiler/inte
	l/composer_xe_2015.0.090/tbb/lib/intel64/gcc4.4:/shared/ibm/platform_ls
	f/9.1/linux2.6-glibc2.3-x86_64/lib:/data/data1/apps/pgi/mvapich2/2.0/li
	b,LANG=en_US.UTF-8,QTLIB=/usr/lib64/qt-3.3/lib,SHELL=/bin/sh,
	EGO_BINDIR=/shared/ibm/platform_lsf/9.1/linux2.6-glibc2.3-x86_64/bin,
	LIBRARY_PATH=/data/data1/apps/compiler/intel/composer_xe_2015.0.090/co
	mpiler/lib/intel64:/data/data1/apps/compiler/intel/composer_xe_2015.0.0
	90/ipp/../compiler/lib/intel64:/data/data1/apps/compiler/intel/composer
	_xe_2015.0.090/ipp/lib/intel64:/data/data1/apps/compiler/intel/composer
	_xe_2015.0.090/compiler/lib/intel64:/data/data1/apps/compiler/intel/com
	poser_xe_2015.0.090/mkl/lib/intel64:/data/data1/apps/compiler/intel/com
	poser_xe_2015.0.090/tbb/lib/intel64/gcc4.4,
	QTINC=/usr/lib64/qt-3.3/include,G_BROKEN_FILENAMES=1,MM_I=07,JDAY=209,
	EGO_LIBDIR=/shared/ibm/platform_lsf/9.1/linux2.6-glibc2.3-x86_64/lib,
	PBS_O_WORKDIR=/data1/aqf/aqf_pbs/run_model/cmaq,
	logdir=/data/data1/aqf1/aqf_pbs/run_model/control/pbs_log/09h/20190725
	,
	MANPATH=/data/data1/apps/compiler/intel/composer_xe_2015.0.090/man/en_
	US:/data/data1/apps/compiler/intel/composer_xe_2015.0.090/man/en_US:/da
	ta/data1/apps/compiler/intel/composer_xe_2015.0.090/debugger/gdb/intel6
	4/share/man/:/data/data1/apps/compiler/intel/composer_xe_2015.0.090/deb
	ugger/gdb/intel64_mic/share/man/:/shared/ibm/platform_lsf/9.1/man:/opt/
	xcat/share/man::,OSTYPE=linux,
	M3HOME=/data1/aqf/aqf/run_model/cmaq/v4.7.1,XCATROOT=/opt/xcat,
	PBS_O_SYSTEM=Linux,VENDOR=unknown,
	NCO=/usr/local/ncl_ncarg/612/gcc446/include,
	M3DATA=/data1/aqf/aqf/run_model/cmaq/v4.7.1/data,
	M3LIB=/data1/aqf/aqf/run_model/cmaq/v4.7.1/lib,HOST=naqf-main01,
	EGO_TOP=/shared/ibm/platform_lsf,HOSTTYPE=x86_64-linux,
	TBBROOT=/data/data1/apps/compiler/intel/composer_xe_2015.0.090/tbb,
	NLSPATH=/data/data1/apps/compiler/intel/composer_xe_2015.0.090/compile
	r/lib/intel64/locale/%l_%t/%N:/data/data1/apps/compiler/intel/composer_
	xe_2015.0.090/ipp/lib/intel64/locale/%l_%t/%N:/data/data1/apps/compiler
	/intel/composer_xe_2015.0.090/mkl/lib/intel64/locale/%l_%t/%N:/data/dat
	a1/apps/compiler/intel/composer_xe_2015.0.090/debugger/gdb/intel64_mic/
	share/locale/%l_%t/%N:/data/data1/apps/compiler/intel/composer_xe_2015.
	0.090/debugger/gdb/intel64/share/locale/%l_%t/%N,
	EGO_ESRVDIR=/shared/ibm/platform_lsf/conf/ego/phpc_cluster/eservice,
	AQF_MODEL=AQF_GFS,PBS_O_LOGNAME=aqf-model1,JRE=/usr/java/jre1.7.0_67,
	MKLROOT=/data/data1/apps/compiler/intel/composer_xe_2015.0.090/mkl,
	YYR=2019,
	GDB_CROSS=/data/data1/apps/compiler/intel/composer_xe_2015.0.090/debug
	ger/gdb/intel64_mic/bin/gdb-mic,MET=AQFv1,CVS_RSH=ssh,
	MAIL=/var/spool/mail/aqf-model1,MACHTYPE=x86_64,YEAR_I=2019,
	SSH_ASKPASS=/usr/libexec/openssh/gnome-ssh-askpass,GROUP=aqf,
	PBS_O_HOME=/data1/aqf,
	EGO_CONFDIR=/shared/ibm/platform_lsf/conf/ego/phpc_cluster/kernel,
	YEAR0=2019,DAY0=25,LESSOPEN=|/usr/bin/lesspipe.sh %s,
	LSF_BINDIR=/shared/ibm/platform_lsf/9.1/linux2.6-glibc2.3-x86_64/bin,
	CPATH=/data/data1/apps/compiler/intel/composer_xe_2015.0.090/mkl/inclu
	de:/data/data1/apps/compiler/intel/composer_xe_2015.0.090/tbb/include,
	LOGNAME=aqf-model1,USER=aqf-model1,
	LSF_ENVDIR=/shared/ibm/platform_lsf/conf,QTDIR=/usr/lib64/qt-3.3,
	PATH=/data/data1/apps/compiler/intel/composer_xe_2015.0.090/bin/intel6
	4:/data/data1/apps/compiler/intel/composer_xe_2015.0.090/mpirt/bin/inte
	l64:/data/data1/apps/compiler/intel/composer_xe_2015.0.090/ipp/include:
	/data/data1/apps/compiler/intel/composer_xe_2015.0.090/debugger/gdb/int
	el64_mic/bin:/shared/ibm/platform_lsf/9.1/linux2.6-glibc2.3-x86_64/etc:
	/shared/ibm/platform_lsf/9.1/linux2.6-glibc2.3-x86_64/bin:/data/data1/a
	pps/pgi/ncview/2.1.2/bin:/usr/local/ncl_ncarg/612/gcc446/bin:/usr/local
	/ncl_ncarg/612/gcc446/bin:/data/data1/apps/pgi/netcdf/3.6.3/bin:/usr/ja
	va/jre1.7.0_67/bin:/data/data1/apps/pgi/mvapich2/2.0/bin:/data/data1/ap
	ps/compiler/pgi/linux86-64/14.9/bin:/opt/pbs/default/bin:/opt/xcat/bin:
	/opt/xcat/sbin:/opt/xcat/share/xcat/tools:/usr/lib64/qt-3.3/bin:/usr/bi
	n:/bin:/opt/ibutils/bin:/opt/pbs/bin:.:/data1/aqf/bin:/opt/pbs/default/
	bin:.:/usr/local/nco/4.2.1/bin,WRFIO_NCD_LARGE_FILE_SUPPORT=1,
	IDL_DML_PATH=/data1/aqf/.idl/mydlm,CYR=2019,DAY_I=24,
	MPIPATH=/data/data1/apps/lib_askanet/intel/mvapich2/2.0,NTH=4,
	M3MODEL=/data1/aqf/aqf/run_model/cmaq/v4.7.1/models,
	LSF_LIBDIR=/shared/ibm/platform_lsf/9.1/linux2.6-glibc2.3-x86_64/lib,
	MIC_LD_LIBRARY_PATH=/data/data1/apps/compiler/intel/composer_xe_2015.0
	.090/compiler/lib/mic:/data/data1/apps/compiler/intel/composer_xe_2015.
	0.090/mpirt/lib/mic:/data/data1/apps/compiler/intel/composer_xe_2015.0.
	090/compiler/lib/mic:/data/data1/apps/compiler/intel/composer_xe_2015.0
	.090/mkl/lib/mic:/data/data1/apps/compiler/intel/composer_xe_2015.0.090
	/tbb/lib/mic,AJ_CDAY=20190725,
	PBS_O_PATH=/data/data1/apps/compiler/intel/composer_xe_2015.0.090/bin/
	intel64:/data/data1/apps/compiler/intel/composer_xe_2015.0.090/mpirt/bi
	n/intel64:/data/data1/apps/compiler/intel/composer_xe_2015.0.090/ipp/in
	clude:/data/data1/apps/compiler/intel/composer_xe_2015.0.090/debugger/g
	db/intel64_mic/bin:/shared/ibm/platform_lsf/9.1/linux2.6-glibc2.3-x86_6
	4/etc:/shared/ibm/platform_lsf/9.1/linux2.6-glibc2.3-x86_64/bin:/data/d
	ata1/apps/pgi/ncview/2.1.2/bin:/usr/local/ncl_ncarg/612/gcc446/bin:/usr
	/local/ncl_ncarg/612/gcc446/bin:/data/data1/apps/pgi/netcdf/3.6.3/bin:/
	usr/java/jre1.7.0_67/bin:/data/data1/apps/pgi/mvapich2/2.0/bin:/data/da
	ta1/apps/compiler/pgi/linux86-64/14.9/bin:/opt/pbs/default/bin:/opt/xca
	t/bin:/opt/xcat/sbin:/opt/xcat/share/xcat/tools:/usr/lib64/qt-3.3/bin:/
	usr/bin:/bin:/opt/ibutils/bin:/opt/pbs/bin:.:/data1/aqf/bin:/opt/pbs/de
	fault/bin:.:/usr/local/nco/4.2.1/bin,MODULESHOME=/usr/share/Modules,
	IDL_STARTUP=/data1/aqf/.idl/idl_startup,profile=N,NO_STOP_MESSAGE=yes,
	PBS=/opt/pbs/default,
	LSF_SERVERDIR=/shared/ibm/platform_lsf/9.1/linux2.6-glibc2.3-x86_64/et
	c,
	INTEL_PYTHONHOME=/data/data1/apps/compiler/intel/composer_xe_2015.0.09
	0/debugger/python/intel64/,SHLVL=4,GRID=KNU_27_01,YDAY=0727,
	INCLUDE=/data/data1/apps/compiler/intel/composer_xe_2015.0.090/mkl/inc
	lude,arch=intel64,PBS_O_MAIL=/var/spool/mail/aqf-model1,
	_=/data/data1/aqf1/aqf_pbs/run_model_72hrs/control/run.AQF.09h.PBS.cro
	n.csh,
	MODULEPATH=/usr/share/Modules/modulefiles:/etc/modulefiles:/opt/mellan
	ox/bupc/2.2/modules,PBS_O_SHELL=/bin/sh,
	GDBSERVER_MIC=/data/data1/apps/compiler/intel/composer_xe_2015.0.090/d
	ebugger/gdb/target/mic/bin/gdbserver,LOADEDMODULES=,LS_COLORS=,
	NCL_COMMAND=/usr/local/ncl_ncarg/612/gcc446/bin,CDAY=0728,FCTIME=09h,
	PWD=/data1/aqf/aqf_pbs/run_model/cmaq,
	INFOPATH=/data/data1/apps/compiler/intel/composer_xe_2015.0.090/debugg
	er/gdb/intel64/share/info/:/data/data1/apps/compiler/intel/composer_xe_
	2015.0.090/debugger/gdb/intel64_mic/share/info/,
	NCARG_ROOT=/usr/local/ncl_ncarg/612/gcc446,
	MIC_LIBRARY_PATH=/data/data1/apps/compiler/intel/composer_xe_2015.0.09
	0/compiler/lib/mic:/data/data1/apps/compiler/intel/composer_xe_2015.0.0
	90/mpirt/lib/mic:/data/data1/apps/compiler/intel/composer_xe_2015.0.090
	/tbb/lib/mic,
	EGO_SERVERDIR=/shared/ibm/platform_lsf/9.1/linux2.6-glibc2.3-x86_64/et
	c,NETCDF=/data/data1/apps/pgi/netcdf/3.6.3,PBS_O_QUEUE=workq,
	PBS_O_HOST=naqf-main01
    euser = aqf-model1
    egroup = aqf
    hashname = 1871206.naqf-main04
    queue_rank = 1564022124607
    queue_type = E
    comment = Job run at Thu Jul 25 at 11:35 on (naqf-gib23:ncpus=24)+(naqf-gib
	24:ncpus=24)+(naqf-gib26:ncpus=24)
    etime = Thu Jul 25 11:35:24 2019
    block = True
    run_count = 1
    Submit_arguments = -N CMAQ_GFS_09h -q workq -j oe -o /data/data1/aqf1/aqf_p
	bs/run_model/control/pbs_log/09h/20190725/cmaq_cctm_KNU_27_01.4.out -l 
	select=3:ncpus=24:mpiprocs=24 -Wblock=true -V ./v4.7.1/work/cctm/run.AQ
	Fv1.PBS.09h.csh
    project = _pbs_project_default
    run_version = 1

[root@naqf-main04 ~]# qstat -r

naqf-main04: 
                                                            Req'd  Req'd   Elap
Job ID          Username Queue    Jobname    SessID NDS TSK Memory Time  S Time
--------------- -------- -------- ---------- ------ --- --- ------ ----- - -----
1871052.naqf-ma Baqf-mod camxq    CAMx_UM_09  30605   1  28    --    --  R 01:20
1871206.naqf-ma aqf-mode workq    CMAQ_GFS_0   9134   3  72    --    --  R 00:02
[root@naqf-main04 ~]# qstat
Job id            Name             User              Time Use S Queue
----------------  ---------------- ----------------  -------- - -----
1871052.naqf-main CAMx_UM_09h      Baqf-model5       00:00:01 R camxq           
1871206.naqf-main CMAQ_GFS_09h     aqf-model1        00:00:00 R workq           
[root@naqf-main04 ~]# qstat -an 1871052

naqf-main04: 
                                                            Req'd  Req'd   Elap
Job ID          Username Queue    Jobname    SessID NDS TSK Memory Time  S Time
--------------- -------- -------- ---------- ------ --- --- ------ ----- - -----
1871052.naqf-ma Baqf-mod camxq    CAMx_UM_09  30605   1  28    --    --  R 01:22
   naqf-gib45/0*28
[root@naqf-main04 ~]# qstat -x 1871052
Job id            Name             User              Time Use S Queue
----------------  ---------------- ----------------  -------- - -----
1871052.naqf-main CAMx_UM_09h      Baqf-model5       00:00:01 R camxq           
[root@naqf-main04 ~]# qstat -fx 1871052
Job Id: 1871052.naqf-main04
    Job_Name = CAMx_UM_09h
    Job_Owner = Baqf-model5@naqf-main04
    resources_used.cpupercent = 0
    resources_used.cput = 00:00:01
    resources_used.mem = 5944kb
    resources_used.ncpus = 28
    resources_used.vmem = 446148kb
    resources_used.walltime = 01:22:33
    job_state = R
    queue = camxq
    server = naqf-main04
    Checkpoint = u
    ctime = Thu Jul 25 10:16:05 2019
    Error_Path = naqf-main04:/data1/Baqf5/aqf/run_model/camx/v6.20/Runscripts/C
	AMx_UM_09h.e1871052
    exec_host = naqf-gib45/0*28
    exec_vnode = (naqf-gib45:ncpus=28)
    Hold_Types = n
    Join_Path = n
    Keep_Files = n
    Mail_Points = a
    mtime = Thu Jul 25 10:16:05 2019
    Output_Path = naqf-main04:/data1/Baqf5/aqf/run_model/camx/v6.20/Runscripts/
	CAMx_UM_09h.o1871052
    Priority = 0
    qtime = Thu Jul 25 10:16:05 2019
    Rerunable = True
    Resource_List.mpiprocs = 28
    Resource_List.ncpus = 28
    Resource_List.nodect = 1
    Resource_List.place = free
    Resource_List.select = 1:ncpus=28:mpiprocs=28
    schedselect = 1:ncpus=28:mpiprocs=28
    stime = Thu Jul 25 10:16:05 2019
    session_id = 30605
    jobdir = /data1/Baqf5
    substate = 42
    Variable_List = LS_COLORS=,
	INTEL_LICENSE_FILE=/data/data1/apps/compiler/intel/License/server.lic,
	MM0=07,NETCDF=/data/data1/apps/pgi/netcdf/3.6.3,
	EGO_LOCAL_CONFDIR=/shared/ibm/platform_lsf/conf/ego/phpc_cluster/kerne
	l,PBS_O_LANG=en_US.UTF-8,
	LM_LICENSE_FILE=/data/data1/apps/compiler/pgi/license.dat,
	HOME=/data1/Baqf5,NCVIEW=/data/data1/apps/pgi/ncview/2.1.2/bin,
	LD_LIBRARY_PATH=/shared/ibm/platform_lsf/9.1/linux2.6-glibc2.3-x86_64/
	lib,LANG=en_US.UTF-8,
	LSF_SERVERDIR=/shared/ibm/platform_lsf/9.1/linux2.6-glibc2.3-x86_64/et
	c,SHELL=/bin/sh,
	EGO_BINDIR=/shared/ibm/platform_lsf/9.1/linux2.6-glibc2.3-x86_64/bin,
	G_BROKEN_FILENAMES=1,MM_I=07,JDAY=206,NO_STOP_MESSAGE=yes,
	MANPATH=/shared/ibm/platform_lsf/9.1/man:,OSTYPE=linux,KYR=19,
	PBS_O_SYSTEM=Linux,VENDOR=unknown,
	IDL_STARTUP=/data1/Baqf5/.idl/idl_startup,HOST=naqf-main04,
	EGO_TOP=/shared/ibm/platform_lsf,DAY0=25,
	NCL_COMMAND=/usr/local/ncl_ncarg/612/gcc446/bin,
	EGO_ESRVDIR=/shared/ibm/platform_lsf/conf/ego/phpc_cluster/eservice,
	AQF_MODEL=AQF_UM,
	LSF_BINDIR=/shared/ibm/platform_lsf/9.1/linux2.6-glibc2.3-x86_64/bin,
	JRE=/usr/java/jre1.7.0_67,YYR=2019,MET=AQFv1,
	PBS_O_WORKDIR=/data1/Baqf5/aqf/run_model/camx/v6.20/Runscripts,
	MAIL=/var/spool/mail/Baqf-model5,MACHTYPE=x86_64,YEAR_I=2019,GROUP=aqf,
	PBS_O_HOME=/data1/Baqf5,
	EGO_CONFDIR=/shared/ibm/platform_lsf/conf/ego/phpc_cluster/kernel,
	YEAR0=2019,HOSTTYPE=x86_64-linux,LESSOPEN=|/usr/bin/lesspipe.sh %s,
	PBS_O_LOGNAME=Baqf-model5,CVS_RSH=ssh,LOGNAME=Baqf-model5,
	USER=Baqf-model5,LSF_ENVDIR=/shared/ibm/platform_lsf/conf,
	PATH=/shared/ibm/platform_lsf/9.1/linux2.6-glibc2.3-x86_64/etc:/shared
	/ibm/platform_lsf/9.1/linux2.6-glibc2.3-x86_64/bin:/data/data1/apps/pgi
	/ncview/2.1.2/bin:/usr/local/ncl_ncarg/612/gcc446/bin:/usr/local/ncl_nc
	arg/612/gcc446/bin:/data/data1/apps/pgi/netcdf/3.6.3/bin:/usr/java/jre1
	.7.0_67/bin:/data/data1/apps/lib_askanet/pgi/mvapich2/2.0/bin:/data/dat
	a1/apps/compiler/pgi/linux86-64/14.9/bin:/opt/pbs/default/bin:/usr/bin:
	/bin:/opt/ibutils/bin:/opt/pbs/bin:.:/data1/Baqf5/bin:/opt/pbs/default/
	bin:.:/usr/local/nco/4.2.1/bin,IDL_DML_PATH=/data1/Baqf5/.idl/mydlm,
	CYR=2019,DAY_I=24,
	MPIPATH=/data/data1/apps/lib_askanet/pgi/mvapich2/2.0,NTH=1,SHLVL=4,
	LSF_LIBDIR=/shared/ibm/platform_lsf/9.1/linux2.6-glibc2.3-x86_64/lib,
	PGI=/data/data1/apps/compiler/pgi,AJ_CDAY=20190725,
	PBS_O_PATH=/shared/ibm/platform_lsf/9.1/linux2.6-glibc2.3-x86_64/etc:/
	shared/ibm/platform_lsf/9.1/linux2.6-glibc2.3-x86_64/bin:/data/data1/ap
	ps/pgi/ncview/2.1.2/bin:/usr/local/ncl_ncarg/612/gcc446/bin:/usr/local/
	ncl_ncarg/612/gcc446/bin:/data/data1/apps/pgi/netcdf/3.6.3/bin:/usr/jav
	a/jre1.7.0_67/bin:/data/data1/apps/lib_askanet/pgi/mvapich2/2.0/bin:/da
	ta/data1/apps/compiler/pgi/linux86-64/14.9/bin:/opt/pbs/default/bin:/us
	r/bin:/bin:/opt/ibutils/bin:/opt/pbs/bin:.:/data1/Baqf5/bin:/opt/pbs/de
	fault/bin:.:/usr/local/nco/4.2.1/bin,MODULESHOME=/usr/share/Modules,
	profile=N,PBS=/opt/pbs/default,GRID=KNU_09_01,YDAY=0724,
	PBS_O_MAIL=/var/spool/mail/Baqf-model5,
	_=/data/data1/Baqf5/aqf/run_model_72hrs/control/run.AQF.09h_4CAMX_AQF.
	cron.csh,MODULEPATH=/usr/share/Modules/modulefiles:/etc/modulefiles,
	PBS_O_SHELL=/bin/sh,
	EGO_SERVERDIR=/shared/ibm/platform_lsf/9.1/linux2.6-glibc2.3-x86_64/et
	c,LOADEDMODULES=,
	EGO_LIBDIR=/shared/ibm/platform_lsf/9.1/linux2.6-glibc2.3-x86_64/lib,
	CDAY=0725,FCTIME=09h,
	PWD=/data1/Baqf5/aqf/run_model/camx/v6.20/Runscripts,
	NCO=/usr/local/ncl_ncarg/612/gcc446/include,
	NCARG_ROOT=/usr/local/ncl_ncarg/612/gcc446,PBS_O_QUEUE=camxq,
	PBS_O_HOST=naqf-main04
    euser = Baqf-model5
    egroup = aqf
    hashname = 1871052.naqf-main04
    queue_rank = 1564017365144
    queue_type = E
    comment = Job run at Thu Jul 25 at 10:16 on (naqf-gib45:ncpus=28)
    etime = Thu Jul 25 10:16:05 2019
    block = True
    run_count = 1
    Submit_arguments = -N CAMx_UM_09h -q camxq -l select=1:ncpus=28:mpiprocs=28
	 -Wblock=true -V ./CAMx_v6.20.EASIA.27.09.L18.mvapch_PSAT.job
    project = _pbs_project_default
    run_version = 1


[root@naqf-main04 ~]# qstat -u aqf-model1

naqf-main04: 
                                                            Req'd  Req'd   Elap
Job ID          Username Queue    Jobname    SessID NDS TSK Memory Time  S Time
--------------- -------- -------- ---------- ------ --- --- ------ ----- - -----
1871213.naqf-ma aqf-mode workq    CMAQ_GFS_0   9585   3  72    --    --  R 00:00


크론탭 백업 스크립트
main01 
[root@naqf-main01 /]# crontab -l
#### CRONTAB BAK
* 12 1 * * sh /data/crontab-bak/main01/main01-cron.sh
```

