/* Runtime dump - MPAction
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MPAction : NSObject <NSCoding, NSCopying>
{
    NSObject<MPActionSupport> * _parentObject;
    MCAction * _action;
    NSObject * _targetObject;
}

@property (retain, nonatomic) NSObject * targetObject;

+ (MCAction *)action;

- (void)dealloc;
- (MPAction *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (MPAction *)init;
- (NSString *)key;
- (MPAction *)copyWithZone:(struct _NSZone *)arg0;
- (void)setAction:(MCAction *)arg0;
- (MPDocument *)parentDocument;
- (void)configureTarget;
- (void)setTargetObject:(NSObject *)arg0;
- (NSObject *)targetObject;
- (GLKShaderBlockNode *)parent;
- (void)setParent:(NSObject *)arg0;

@end
