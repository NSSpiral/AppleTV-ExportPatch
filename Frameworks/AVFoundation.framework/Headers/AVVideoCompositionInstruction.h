/* Runtime dump - AVVideoCompositionInstruction
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVVideoCompositionInstruction : NSObject <NSSecureCoding, NSCopying, NSMutableCopying, AVVideoCompositionInstruction>
{
    AVVideoCompositionInstructionInternal * _instruction;
}

@property (readonly, nonatomic) struct ? timeRange;
@property (retain, nonatomic) struct CGColor * backgroundColor;
@property (readonly, copy, nonatomic) NSArray * layerInstructions;
@property (readonly, nonatomic) char enablePostProcessing;
@property (readonly, nonatomic) NSArray * requiredSourceTrackIDs;
@property (readonly, nonatomic) int passthroughTrackID;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) char containsTweening;

+ (void)initialize;
+ (char)supportsSecureCoding;

- (NSArray *)layerInstructions;
- (char)enablePostProcessing;
- (void)setEnablePostProcessing:(char)arg0;
- (void)_setValuesFromDictionary:(NSDictionary *)arg0;
- (void)setLayerInstructions:(NSArray *)arg0;
- (char)containsTweening;
- (NSArray *)requiredSourceTrackIDs;
- (int)passthroughTrackID;
- (void)dealloc;
- (void)setBackgroundColor:(struct CGColor *)arg0;
- (AVVideoCompositionInstruction *)initWithCoder:(NSCoder *)arg0;
- (struct CGColor *)backgroundColor;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (AVVideoCompositionInstruction *)init;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (AVVideoCompositionInstruction *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (AVVideoCompositionInstruction *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (struct ?)timeRange;
- (void)setTimeRange:(struct ?)arg0;
- (void)finalize;

@end
