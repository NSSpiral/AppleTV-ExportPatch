/* Runtime dump - GKRequestIdentifier
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKRequestIdentifier : NSObject <NSCopying>
{
    unsigned int _savedHash;
    SEL _selector;
    NSArray * _arguments;
}

+ (GKRequestIdentifier *)requestIdentifierForInvocation:(NSObject *)arg0;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GKRequestIdentifier *)copyWithZone:(struct _NSZone *)arg0;
- (GKRequestIdentifier *)initWithInvocation:(NSInvocation *)arg0;
- (NSObject *)_argumentsForInvocation:(NSObject *)arg0;

@end
