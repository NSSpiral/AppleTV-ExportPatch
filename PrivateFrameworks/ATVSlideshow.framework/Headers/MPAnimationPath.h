/* Runtime dump - MPAnimationPath
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MPAnimationPath : NSObject <NSCoding, NSCopying>
{
    char _isTriggered;
    NSObject<MPAnimationSupport> * _parentObject;
    MCAnimationPath * _animationPath;
}

@property char isTriggered;

+ (MCAnimationPath *)animationPath;

- (void)dealloc;
- (MPAnimationPath *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (MPAnimationPath *)init;
- (NSString *)description;
- (NSString *)key;
- (MPAnimationPath *)copyWithZone:(struct _NSZone *)arg0;
- (void)cleanup;
- (MPDocument *)parentDocument;
- (NSObject *)animatedParent;
- (NSString *)animatedKey;
- (char)isTriggered;
- (void)setIsTriggered:(char)arg0;
- (MCAnimationPath *)animationPath;
- (void)setAnimationPath:(MCAnimationPath *)arg0;
- (GLKShaderBlockNode *)parent;
- (void)setParent:(NSObject *)arg0;

@end
