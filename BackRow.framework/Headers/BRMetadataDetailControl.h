/* Runtime dump - BRMetadataDetailControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@protocol BRMetadataContainer;
@interface BRMetadataDetailControl : BRControl <BRMetadataContainer>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)layoutSubcontrols;
- (void)setMetadata:(NSArray *)arg0 withLabels:(NSArray *)arg1;
- (void)addDetails:(GEOPlaceActionDetails *)arg0 withLabel:(NSString *)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (NSString *)accessibilityLabel;

@end
