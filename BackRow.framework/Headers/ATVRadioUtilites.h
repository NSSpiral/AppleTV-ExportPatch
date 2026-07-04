/* Runtime dump - ATVRadioUtilites
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class BRController;
@interface ATVRadioUtilites : NSObject

+ (void)displayDialogWithDictionary:(NSDictionary *)arg0 completionHandler:(id /* block */)arg1;
+ (NSString *)playbackErrorForStationWithName:(NSString *)arg0;
+ (NSString *)errorForNonexistentStationWithName:(NSString *)arg0;
+ (ATVRadioUtilites *)artworkURLFromCollection:(id)arg0;
+ (NSError *)addStationError;
+ (NSError *)artistBasedStationCreationError;
+ (NSError *)songBasedStationCreationError;
+ (NSError *)freeloaderError;
+ (void)displayFailureDialogForError:(NSError *)arg0;
+ (void)teardownServiceUnavailableDialog;
+ (ATVRadioUtilites *)artworkURLFromVariants:(id)arg0;
+ (void)playbackStation:(ATVDataCollection *)arg0 initialTracks:(NSArray *)arg1;
+ (void)deletePersonalStation:(id)arg0 requiringConfirmation:(char)arg1;
+ (void)playbackAddingStation:(id)arg0;
+ (void)presentConfirmationDialogWithIdentifier:(NSString *)arg0 title:(NSString *)arg1 message:(NSString *)arg2 cancelButtonTitle:(NSString *)arg3 confirmationButtonTitle:(NSString *)arg4 selectionHandler:(<BRSelectionHandler> *)arg5;
+ (void)playbackCreatingStationWithItem:(NSObject *)arg0 artistBased:(char)arg1 displayFailure:(char)arg2 completionHandler:(id /* block */)arg3;
+ (char)submitLikeQueryForTrack:(NSObject *)arg0 likedState:(int)arg1;
+ (char)isRadioURL:(NSURL *)arg0;
+ (void)handleOpenRadioURL:(NSURL *)arg0;
+ (void)_completePasscodePromptForController:(BRController *)arg0 successfully:(char)arg1;
+ (void)_passcodeSuccessfullyEntered:(id)arg0;
+ (void)_passcodeEntryCanceled:(id)arg0;
+ (void)_promptForRestrictionsPasscodeWithCompletionHandler:(id /* block */)arg0;
+ (void)_playbackMyStation:(id)arg0 initialTracks:(NSArray *)arg1 delay:(char)arg2;
+ (void)_playbackStoreStation:(id)arg0;
+ (char)_isRadioScheme:(NSString *)arg0;
+ (char)_isStationsURL:(NSURL *)arg0;
+ (NSError *)notOptedInError;
+ (void)_obtainApprovalIfNeededForPlayingStation:(id)arg0 withCompletionHandler:(id /* block */)arg1;
+ (NSError *)_dialogIdentifierForError:(NSError *)arg0;
+ (NSError *)serviceUnavailableError;

@end
