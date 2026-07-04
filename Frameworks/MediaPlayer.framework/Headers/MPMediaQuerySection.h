/* Runtime dump - MPMediaQuerySection
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaQuerySection : NSObject <NSSecureCoding, NSCopying>
{
    NSString * _title;
    unsigned int _sectionIndexTitleIndex;
    struct _NSRange _range;
}

@property (copy, nonatomic) NSString * title;
@property (nonatomic) struct _NSRange range;
@property (nonatomic) unsigned int sectionIndexTitleIndex;

+ (char)supportsSecureCoding;

- (unsigned int)sectionIndexTitleIndex;
- (void)setSectionIndexTitleIndex:(unsigned int)arg0;
- (MPMediaQuerySection *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (MPMediaQuerySection *)init;
- (void)setTitle:(NSString *)arg0;
- (NSString *)description;
- (MPMediaQuerySection *)_init;
- (NSString *)title;
- (MPMediaQuerySection *)copyWithZone:(struct _NSZone *)arg0;
- (struct _NSRange)range;
- (void).cxx_destruct;
- (void)setRange:(struct _NSRange)arg0;

@end
