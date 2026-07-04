/* Runtime dump - PLXPCTransaction
 * Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

@interface PLXPCTransaction : NSObject
{
    char * _identifier;
}

+ (NSArray *)callStackSymbols;
+ (void)_prepareStackCache;
+ (void)discardCallStackSymbols:(id)arg0;
+ (NSObject *)transaction:(char *)arg0;

- (void)dealloc;
- (NSString *)description;
- (PLXPCTransaction *)initWithIdentifier:(char *)arg0;
- (void)stillAlive;

@end
