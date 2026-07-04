/* Runtime dump - MPText
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MPText : NSObject <NSCoding, NSCopying>
{
    MCText * _text;
    MPTextInternal * _internal;
    NSObject<MPEffectSupport> * _parent;
}

+ (MPText *)textWithAttributedString:(NSAttributedString *)arg0;

- (void)dealloc;
- (MPText *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (MPText *)init;
- (NSString *)description;
- (NSURL *)action;
- (MPText *)copyWithZone:(struct _NSZone *)arg0;
- (MCText *)text;
- (void)setText:(MCText *)arg0;
- (void)setAttributedString:(NSAttributedString *)arg0;
- (NSString *)attributedString;
- (MPText *)initWithAttributedString:(NSAttributedString *)arg0;
- (int)index;
- (NSString *)fullDebugLog;
- (NSObject *)parentEffect;
- (void)copyStruct:(id)arg0;
- (id)nearestPlug;
- (NSString *)defaultString;
- (void)checkForMaxFontSize;
- (void)checkForPlacesLabel;
- (id)subtitleSlide;
- (double)displayTime;
- (double)displayStartTime;
- (double)displayDuration;
- (float)textAreaAspectRatio;
- (float)maxFontSize;
- (char)isOriginal;
- (NSString *)plainString;
- (void)setPlainString:(NSString *)arg0;
- (void)dump;
- (void)setParent:(NSObject<MPEffectSupport> *)arg0;

@end
