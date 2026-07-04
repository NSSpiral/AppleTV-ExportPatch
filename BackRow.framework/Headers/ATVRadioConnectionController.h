/* Runtime dump - ATVRadioConnectionController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@protocol BRSecureResource;

@class BRAuthenticator;
@interface ATVRadioConnectionController : BRViewController <BRSecureResource>
{
    int _state;
    int _type;
    id _termsCompletionHandler;
    NSTimer * _spinnerTimer;
}

@property (nonatomic) int state;
@property (nonatomic) int type;
@property (copy, nonatomic) id termsCompletionHandler;
@property (weak, nonatomic) NSTimer * spinnerTimer;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (ATVRadioConnectionController *)termsCheckConnectionControllerWithCompletionHandler:(id /* block */)arg0;
+ (NSObject *)rootConnectionController;
+ (ATVRadioConnectionController *)connectionControllerWithCompletionHandler:(id /* block */)arg0;

- (BRAuthenticator *)secureResourceAuthenticator;
- (void)wasPushed;
- (void)wasPopped;
- (void)setTermsCompletionHandler:(id /* block */)arg0;
- (void)_checkInitialState;
- (void)_initiateRadioTermsCheck;
- (void)_connectRadioClient;
- (void)_performCompletion;
- (void)_showSpinner;
- (NSTimer *)spinnerTimer;
- (void)setSpinnerTimer:(NSTimer *)arg0;
- (id /* block */)termsCompletionHandler;
- (void)_showSpinnerWithDelay;
- (void)_handleTermsResponse:(NSURLResponse *)arg0;
- (void)_performFailureWithErrorCode:(int)arg0;
- (void)_initiateRadioOptIn;
- (void)_handleTermsAgreeSelection:(id)arg0;
- (void)_handleTermsDisagreeSelection:(id)arg0;
- (void)dealloc;
- (int)state;
- (void)setState:(int)arg0;
- (void)setType:(int)arg0;
- (int)type;
- (void).cxx_destruct;
- (void)_dataClientConnectionHandler:(id /* block */)arg0;

@end
