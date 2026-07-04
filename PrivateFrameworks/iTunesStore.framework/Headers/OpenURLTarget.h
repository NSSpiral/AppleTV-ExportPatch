/* Runtime dump - OpenURLTarget
 * Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface OpenURLTarget : NSObject
{
    unsigned int _applicationState;
    struct ? _targetData;
    int _targetIndex;
}

- (OpenURLTarget *)init;
- (NSString *)description;
- (int)compare:(NSObject *)arg0;
- (OpenURLTarget *)initWithTargetIdentifier:(NSString *)arg0;
- (NSURL *)copyURLForURL:(NSURL *)arg0;

@end
