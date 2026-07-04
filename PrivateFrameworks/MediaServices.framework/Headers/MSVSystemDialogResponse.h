/* Runtime dump - MSVSystemDialogResponse
 * Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

@interface MSVSystemDialogResponse : NSObject
{
    int _buttonIdentifier;
    NSArray * _textFieldValues;
}

@property (readonly, nonatomic) int buttonIdentifier;
@property (readonly, nonatomic) NSArray * textFieldValues;

- (NSString *)description;
- (void).cxx_destruct;
- (MSVSystemDialogResponse *)initWithIdentifier:(int)arg0 textFieldValues:(NSArray *)arg1;
- (int)buttonIdentifier;
- (NSArray *)textFieldValues;

@end
