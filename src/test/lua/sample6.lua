function ThreadTest()
	print("ThreadTest ����")
	
	print("TestFunc ȣ��")
	TestFunc()
	TestFunc2(1.2)
	print("TestFunc ����")
	
	print("g_test::TestFunc() ȣ��")
	g_test:TestFunc()
	g_test:TestFunc2(2.3)
	print("g_test::TestFunc() ����")
	
	print("ThreadTest ����")
end
