/* Runtime dump - BRMetadataDetailChunkControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@protocol BRMetadataContainer;
@interface BRMetadataDetailChunkControl : BRControl <BRMetadataContainer>
{
    char _leftAlignLabel;
}

@property (nonatomic) char leftAlignLabel;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)layoutSubcontrols;
- (void)setMetadata:(NSArray *)arg0 withLabels:(NSArray *)arg1;
- (char)leftAlignLabel;
- (void)setLeftAlignLabel:(char)arg0;
- (void)dealloc;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (NSString *)accessibilityLabel;

@end
