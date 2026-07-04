/* Runtime dump - MPFrame
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MPFrame : NSObject <NSCoding, NSCopying>
{
    NSMutableDictionary * _attributes;
    MPSlide * _parentSlide;
    MPFrameInternal * _internal;
}

@property (copy, nonatomic) NSString * frameID;
@property (copy, nonatomic) NSString * presetID;

+ (MPFrame *)frameWithFrameID:(NSString *)arg0;

- (void)dealloc;
- (MPFrame *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (MPFrame *)init;
- (NSString *)description;
- (MPFrame *)copyWithZone:(struct _NSZone *)arg0;
- (MPDocument *)parentDocument;
- (NSString *)fullDebugLog;
- (void)copyStruct:(id)arg0;
- (NSString *)presetID;
- (void)setPresetID:(NSString *)arg0;
- (NSString *)frameID;
- (void)setFrameID:(NSString *)arg0;
- (MPFrame *)initWithFrameID:(NSString *)arg0;
- (void)setFrameAttribute:(NSObject *)arg0 forKey:(NSString *)arg1;
- (NSDictionary *)frameAttributes;
- (NSString *)frameAttributeForKey:(NSString *)arg0;
- (MPSlide *)parentSlide;
- (void)setParentSlide:(MPSlide *)arg0;
- (void)dump;

@end
