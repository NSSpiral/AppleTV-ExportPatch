/* Runtime dump - OAXTableStyleCache
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OAXTableStyleCache : NSObject
{
    NSString * mDefaultStyleId;
    NSMutableDictionary * mCache;
}

- (void)dealloc;
- (OAXTableStyleCache *)init;
- (struct _xmlNode *)styleNodeForId:(struct _xmlNode *)arg0;
- (NSObject *)defaultStyleId;
- (void)setDefaultStyleId:(NSObject *)arg0;
- (void)setStyleNode:(struct _xmlNode *)arg0 forId:(struct _xmlNode *)arg1;
- (struct _xmlNode *)defaultStyleNode;

@end
