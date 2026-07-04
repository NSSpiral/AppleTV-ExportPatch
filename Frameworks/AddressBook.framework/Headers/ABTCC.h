/* Runtime dump - ABTCC
 * Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@interface ABTCC : NSObject
{
    char _calledExternalChangeCallbacks;
    int _simulateType;
    char _simulateAccessPrompt;
    char _simulateAccessPromptGranted;
    unsigned int _simulateAccessPromptDelay;
}

+ (ABTCC *)sharedInstance;

- (void)callExternalChangeCallbacks:(char)arg0;
- (NSOperationQueue *)_simulateQueue;
- (int)accessPreflight;
- (unsigned char)isAccessRestricted;
- (void)accessRequestWithCompletion:(id /* block */)arg0;
- (void)simulate:(int)arg0;
- (void)simulateIfAccessPromptDisplayedThenUserGrantedAccess:(char)arg0 withDelay:(unsigned int)arg1;
- (void)dealloc;
- (ABTCC *)init;

@end
