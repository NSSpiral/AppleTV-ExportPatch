/* Runtime dump - MPMediaQuerySectionInfo
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaQuerySectionInfo : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSArray * _sections;
    NSArray * _sectionIndexTitles;
    char _hasUnknownSection;
}

@property (readonly, copy, nonatomic) NSArray * sections;
@property (copy, nonatomic) NSArray * sectionIndexTitles;
@property (nonatomic) char hasUnknownSection;
@property (readonly, nonatomic) unsigned int count;

+ (char)supportsSecureCoding;

- (void)setSectionIndexTitles:(NSArray *)arg0;
- (unsigned int)indexOfSectionForSectionIndexTitleAtIndex:(unsigned int)arg0;
- (char)hasUnknownSection;
- (void)setHasUnknownSection:(char)arg0;
- (MPMediaQuerySectionInfo *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (unsigned int)count;
- (NSString *)description;
- (MPMediaQuerySectionInfo *)copyWithZone:(struct _NSZone *)arg0;
- (MPMediaQuerySectionInfo *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (NSArray *)sectionIndexTitles;
- (void).cxx_destruct;
- (NSArray *)sections;

@end
