/* Runtime dump - ML3QuerySection
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3QuerySection : NSObject
{
    unsigned int _sectionIndex;
    struct _NSRange _range;
}

@property (nonatomic) struct _NSRange range;
@property (nonatomic) unsigned int sectionIndex;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (struct _NSRange)range;
- (void)setRange:(struct _NSRange)arg0;
- (ML3QuerySection *)initWithRange:(struct _NSRange)arg0 sectionIndex:(unsigned int)arg1;
- (unsigned int)sectionIndex;
- (void)setSectionIndex:(unsigned int)arg0;

@end
