/* Runtime dump - SBUINumericPasscodeEntryFieldBase
 * Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBUINumericPasscodeEntryFieldBase : SBUIPasscodeEntryField
{
    NSMutableCharacterSet * _numericTrimmingSet;
    unsigned int _maxNumbersAllowed;
    char _allowsNewlineAcceptance;
    char _autoAcceptWhenMaxNumbersMet;
}

@property (nonatomic) unsigned int maxNumbersAllowed;
@property (nonatomic) char allowsNewlineAcceptance;
@property (nonatomic) char autoAcceptWhenMaxNumbersMet;

- (void)dealloc;
- (char)resignFirstResponder;
- (SBUINumericPasscodeEntryFieldBase *)initWithDefaultSizeAndLightStyle:(char)arg0;
- (void)setMaxNumbersAllowed:(unsigned int)arg0;
- (void)_appendString:(NSString *)arg0;
- (void)_deleteLastCharacter;
- (void)setAllowsNewlineAcceptance:(char)arg0;
- (void)setAutoAcceptWhenMaxNumbersMet:(char)arg0;
- (char)shouldInsertPasscodeText:(NSString *)arg0;
- (char)_hasMaxDigitsSpecified;
- (void)_reallyAppendString:(NSString *)arg0;
- (char)allowsNewlineAcceptance;
- (unsigned int)maxNumbersAllowed;
- (char)autoAcceptWhenMaxNumbersMet;

@end
