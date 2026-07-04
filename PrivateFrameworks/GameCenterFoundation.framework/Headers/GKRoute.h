/* Runtime dump - GKRoute
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKRoute : NSObject
{
    NSRegularExpression * _regex;
    NSArray * _parameterNames;
    NSString * _scheme;
}

- (void)dealloc;
- (GKRoute *)initWithString:(NSString *)arg0;
- (GKRoute *)initWithString:(NSString *)arg0 scheme:(NSString *)arg1;
- (NSSet *)nonParameterCharacterSet;
- (char)matchesURL:(NSURL *)arg0 parameters:(id *)arg1;
- (char)matchesURL:(NSURL *)arg0;

@end
