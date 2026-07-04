/* Runtime dump - TPStarkPhoneCallGalleryView
 * Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPStarkPhoneCallGalleryView : UIView <TPStarkPhoneCallContainerDataSource, TPStarkPhoneCallContainerDelegate>
{
    <TPStarkPhoneCallGalleryViewDelegate> * _delegate;
    TPStarkPhoneCallContainer * _container;
}

@property <TPStarkPhoneCallGalleryViewDelegate> * delegate;
@property (retain) TPStarkPhoneCallContainer * container;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (TPStarkPhoneCallGalleryView *)statusStringForDisplayForCall:(id)arg0;

- (TPStarkPhoneCallGalleryView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setDelegate:(<TPStarkPhoneCallGalleryViewDelegate> *)arg0;
- (<TPStarkPhoneCallGalleryViewDelegate> *)delegate;
- (void)setContainer:(TPStarkPhoneCallContainer *)arg0;
- (TPStarkPhoneCallContainer *)container;
- (void)startListeningForCallNotifications;
- (void)stopListeningForCallNotifications;
- (void)phoneCallDataDidChange:(NSDictionary *)arg0;
- (id)primaryCalls;
- (NSObject *)phoneCallForIndex:(unsigned int)arg0 isMerged:(char *)arg1;
- (id)mergedStringForMergedCalls;
- (unsigned int)numberOfViewCellsForPhoneCallContainer:(NSObject *)arg0;
- (id)mergedCalls;
- (NSObject *)phoneCallContainer:(NSObject *)arg0 titleForViewCellAtIndex:(unsigned int)arg1;
- (NSObject *)phoneCallContainer:(NSObject *)arg0 subtitleForViewCellAtIndex:(unsigned int)arg1;
- (char)phoneCallContainer:(NSObject *)arg0 cellIsDimmedAtIndex:(unsigned int)arg1;
- (void)phoneCallContainer:(NSObject *)arg0 phoneCallViewTappedAtIndex:(unsigned int)arg1;
- (void)reloadPhoneCallData;
- (void)addPrimaryPhoneCall:(id)arg0 animated:(char)arg1;
- (void)mergePrimaryPhoneCallsAnimated:(char)arg0;
- (void)endPhoneCall:(id)arg0 animated:(char)arg1;
- (void)setIsShowingCallFailure:(char)arg0;

@end
