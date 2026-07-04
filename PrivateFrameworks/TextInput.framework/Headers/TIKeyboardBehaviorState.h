/* Runtime dump - TIKeyboardBehaviorState
 * Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIKeyboardBehaviorState : NSObject
{
    char hasInput;
    char hasCandidates;
    char hasCandidateSelected;
    char hasNextPage;
    char showsExtendedList;
    char followsZhuyin;
    char spaceConfirmation;
    char _hasAutocorrection;
    char _showsCandidatesInLayout;
}

@property (nonatomic) char hasInput;
@property (nonatomic) char hasAutocorrection;
@property (nonatomic) char hasCandidates;
@property (nonatomic) char hasCandidateSelected;
@property (nonatomic) char hasNextPage;
@property (nonatomic) char showsExtendedList;
@property (nonatomic) char followsZhuyin;
@property (nonatomic) char spaceConfirmation;
@property (nonatomic) char showsCandidatesInLayout;

- (char)hasCandidates;
- (char)hasNextPage;
- (char)hasInput;
- (char)hasCandidateSelected;
- (char)hasAutocorrection;
- (void)setHasInput:(char)arg0;
- (void)setHasAutocorrection:(char)arg0;
- (void)setHasCandidates:(char)arg0;
- (void)setHasCandidateSelected:(char)arg0;
- (void)setHasNextPage:(char)arg0;
- (void)setShowsExtendedList:(char)arg0;
- (void)setShowsCandidatesInLayout:(char)arg0;
- (void)setFollowsZhuyin:(char)arg0;
- (void)setSpaceConfirmation:(char)arg0;
- (char)showsExtendedList;
- (char)followsZhuyin;
- (char)spaceConfirmation;
- (char)showsCandidatesInLayout;

@end
