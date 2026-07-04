/* Runtime dump - STRootStorage
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface STRootStorage : STStorage
{
    struct _RootStorage * m_pCRoot;
    NSMutableData * m_StorageData;
    void * m_pvBuf;
}

- (void)dealloc;
- (void *)resizeStorageBuffer:(unsigned long)arg0;
- (STRootStorage *)initWithName:(NSString *)arg0 andMode:(int)arg1;
- (STRootStorage *)initWithMutableData:(NSMutableData *)arg0 andMode:(int)arg1;
- (NSObject *)getDocumentProperty:(int)arg0 withId:(int)arg1 PropType:(int *)arg2 throwOnError:(char)arg3;
- (short)getShortDocumentPropertyWithId:(int)arg0 givenPropStream:(int)arg1;
- (void)setDocumentProperty:(int)arg0 withId:(int)arg1 AndType:(int)arg2 AndValue:(void *)arg3;
- (NSObject *)getDocumentProperty:(int)arg0 withId:(int)arg1 PropType:(int *)arg2;
- (NSObject *)getStringDocumentPropertyWithId:(int)arg0 givenPropStream:(int)arg1;
- (long)getLongDocumentPropertyWithId:(int)arg0 givenPropStream:(int)arg1;
- (void)setStringDocumentPropertyWithId:(int)arg0 to:(NSObject *)arg1 givenPropStream:(int)arg2;
- (void)setLongDocumentPropertyWithId:(int)arg0 to:(long)arg1 givenPropStream:(int)arg2;
- (void)setShortDocumentPropertyWithId:(int)arg0 to:(short)arg1 givenPropStream:(int)arg2;
- (void)setBlobDocumentPropertyWithId:(int)arg0 to:(void *)arg1 givenPropStream:(int)arg2;
- (void)setDefaultDocumentProperties;

@end
