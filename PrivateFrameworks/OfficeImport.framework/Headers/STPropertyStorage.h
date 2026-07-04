/* Runtime dump - STPropertyStorage
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface STPropertyStorage : NSObject
{
    struct _SsrwPropertyStorage * m_pPropertyStorage;
}

- (void)dealloc;
- (void)close;
- (NSObject *)getDocumentPropertyWithId:(int)arg0 propType:(int *)arg1;
- (short)getShortDocumentPropertyWithId:(int)arg0;
- (void)setDocumentPropertyWithId:(int)arg0 to:(NSObject *)arg1;
- (STPropertyStorage *)initWithPropertyStorage:(struct _SsrwPropertyStorage *)arg0;
- (long)getLongDocumentPropertyWithId:(int)arg0;
- (NSObject *)getStringDocumentPropertyWithId:(int)arg0;
- (NSString *)getDocumentPropertyWithName:(NSString *)arg0 propType:(int *)arg1;
- (void)setLongDocumentPropertyWithId:(int)arg0 to:(long)arg1;
- (void)setShortDocumentPropertyWithId:(int)arg0 to:(short)arg1;
- (void)setStringDocumentPropertyWithId:(int)arg0 to:(NSObject *)arg1;
- (void)setBlobDocumentPropertyWithName:(NSString *)arg0 to:(NSObject *)arg1;

@end
