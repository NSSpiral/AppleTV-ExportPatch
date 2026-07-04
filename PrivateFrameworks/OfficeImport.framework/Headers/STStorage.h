/* Runtime dump - STStorage
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface STStorage : STSStgObject
{
    struct _Storage * m_pCStorage;
}

- (void)dealloc;
- (STStorage *)init;
- (void)close;
- (STStorage *)initWithCStorage:(struct _Storage *)arg0;
- (NSObject *)openStream:(NSObject *)arg0 withMode:(int)arg1;
- (id)openStorage:(id)arg0 withMode:(int)arg1;
- (NSDictionary *)getChildrenInfo;
- (int)getChildType:(NSObject *)arg0;
- (NSDictionary *)getInfo;
- (void)setClass:(struct ?)arg0;

@end
