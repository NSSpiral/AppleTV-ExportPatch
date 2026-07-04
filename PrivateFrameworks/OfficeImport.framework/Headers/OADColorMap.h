/* Runtime dump - OADColorMap
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADColorMap : NSObject
{
    NSMutableDictionary * mMappings;
}

- (void)dealloc;
- (OADColorMap *)init;
- (char)isEqual:(NSObject *)arg0;
- (void)addMapping:(int)arg0 index:(int)arg1;
- (int)mappingForIndex:(int)arg0;
- (void)addDefaultMappings:(char)arg0;

@end
