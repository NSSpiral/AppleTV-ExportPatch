/* Runtime dump - OADProperties
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADProperties : NSObject
{
    OADProperties * mParent;
    id mIsMerged;
    id mIsMergedWithParent;
}

+ (OADProperties *)defaultProperties;

- (void)dealloc;
- (OADProperties *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (char)isMerged;
- (char)isMergedWithParent;
- (void)setMerged:(char)arg0;
- (void)setMergedWithParent:(char)arg0;
- (void)removeUnnecessaryOverrides;
- (void)p_setParent:(NSObject *)arg0;
- (void)setParent:(NSObject *)arg0 myRestrictedClass:(Class)arg1;
- (OADProperties *)initWithDefaults;
- (NSString *)overrideForSelector:(SEL)arg0;
- (char)isMergedPropertyForSelector:(SEL)arg0;
- (void)flatten;
- (GLKShaderBlockNode *)parent;
- (void)setParent:(NSObject *)arg0;

@end
