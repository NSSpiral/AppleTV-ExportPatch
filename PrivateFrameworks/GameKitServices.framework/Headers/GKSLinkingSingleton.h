/* Runtime dump - GKSLinkingSingleton
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/ViceroyTrace.framework/ViceroyTrace
 */

@interface GKSLinkingSingleton : NSObject
{
    NSMutableDictionary * handleSoFar;
}

+ (GKSLinkingSingleton *)defaultGKSLinkingSingleton;

- (void *)handleForBinaryPath:(NSString *)arg0;

@end
