/* Runtime dump - ISServerAuthenticationOperation
 * Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISServerAuthenticationOperation : ISOperation
{
    NSNumber * _authenticatedAccountDSID;
    SSAuthenticationContext * _authenticationContext;
    ISDialog * _dialog;
    char _performsButtonAction;
    ISDialogButton * _performedButton;
    NSURL * _redirectURL;
    ISDialogButton * _selectedButton;
}

@property (retain) SSAuthenticationContext * authenticationContext;
@property (retain) ISDialog * dialog;
@property char performsButtonAction;
@property (retain) NSNumber * authenticatedAccountDSID;
@property (retain) ISDialogButton * performedButton;
@property (retain) NSURL * redirectURL;
@property (retain) ISDialogButton * selectedButton;

- (void)setAuthenticationContext:(SSAuthenticationContext *)arg0;
- (void)dealloc;
- (ISServerAuthenticationOperation *)init;
- (void)run;
- (SSAuthenticationContext *)authenticationContext;
- (ISDialog *)dialog;
- (void)setDialog:(ISDialog *)arg0;
- (NSURL *)redirectURL;
- (void)setRedirectURL:(NSURL *)arg0;
- (NSNumber *)authenticatedAccountDSID;
- (void)setAuthenticatedAccountDSID:(NSNumber *)arg0;
- (void)setSelectedButton:(ISDialogButton *)arg0;
- (ISDialogButton *)selectedButton;
- (char)performsButtonAction;
- (void)setPerformsButtonAction:(char)arg0;
- (ISDialogButton *)performedButton;
- (void)setPerformedButton:(ISDialogButton *)arg0;

@end
