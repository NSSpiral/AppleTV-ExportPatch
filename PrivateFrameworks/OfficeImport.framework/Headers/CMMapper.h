/* Runtime dump - CMMapper
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CMMapper : NSObject <CMMapperRootArchiver>
{
    CMMapper * mParent;
}

- (CMMapper *)root;
- (CMArchiveManager *)archiver;
- (void)addAttribute:(struct __CFString *)arg0 toNode:(NSObject *)arg1 value:(NSObject *)arg2;
- (void)mapAt:(NSObject *)arg0 withState:(NSObject *)arg1;
- (void)addStyleUsingGlobalCacheTo:(id)arg0 style:(NSObject *)arg1;
- (void)addStyleUsingGlobalCacheTo:(id)arg0 style:(NSObject *)arg1 embedStyle:(char)arg2;
- (void)addStyle:(struct __CFString *)arg0 withName:(NSString *)arg1;
- (void)mapStylesheetAt:(id)arg0 stylesheet:(TSSStylesheet *)arg1;
- (void)startMappingWithState:(NSObject *)arg0;
- (void)mapElement:(NSObject *)arg0 atIndex:(unsigned int)arg1 withState:(NSObject *)arg2 isLastElement:(char)arg3;
- (void)finishMappingWithState:(NSObject *)arg0;
- (GLKShaderBlockNode *)parent;
- (void)setParent:(NSObject *)arg0;
- (CMMapper *)initWithParent:(NSObject *)arg0;

@end
