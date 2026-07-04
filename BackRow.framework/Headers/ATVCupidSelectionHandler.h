/* Runtime dump - ATVCupidSelectionHandler
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRSelectionHandler;

@class BRControl;
@interface ATVCupidSelectionHandler : NSObject <BRSelectionHandler>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (<BRSelectionHandler> *)selectionHandler;

- (char)_handleShowInAlbum:(id)arg0;
- (char)handleSelectionForControl:(BRControl *)arg0;
- (char)_handleSignOut:(id)arg0;
- (char)_handleDeletePhoto:(UIImage *)arg0;
- (char)_handleDeletePhotoStream:(NSObject *)arg0;
- (char)_handleMembershipQueryOfType:(NSObject *)arg0 collection:(RadioArtworkCollection *)arg1;
- (char)_handleUserConfirmedUnsubscribeMembershipForCollection:(id)arg0;
- (char)_handleLikeByLiking:(char)arg0 dataItem:(ATVDataItem *)arg1;
- (char)_handleUseForScreensaver:(id)arg0 showConfirmation:(char)arg1;

@end
