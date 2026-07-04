/* Runtime dump - OCDDelayedNode
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OCDDelayedNode : NSObject
{
    <OCDDelayedNodeContext> * mDelayedContext;
    BOOL mLoaded;
}

- (void)dealloc;
- (BOOL)isLoaded;
- (BOOL)load;
- (void)setDelayedContext:(NSObject *)arg0;
- (void)setLoaded:(BOOL)arg0;
- (NSString *)delayedContext;

@end
