/* Runtime dump - NotesDataCollectorChange
 * Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@interface NotesDataCollectorChange : NSObject
{
    NSString * _accountIdentifier;
    int _accountType;
    int _operation;
    int _entity;
}

@property (copy, nonatomic) NSString * accountIdentifier;
@property (nonatomic) int accountType;
@property (nonatomic) int operation;
@property (nonatomic) int entity;

+ (NSObject *)changeForEntity:(int)arg0 operation:(int)arg1 account:(NSObject *)arg2;

- (void)setAccountIdentifier:(NSString *)arg0;
- (int)operation;
- (void)setOperation:(int)arg0;
- (void).cxx_destruct;
- (void)setAccountType:(int)arg0;
- (int)accountType;
- (NSString *)accountIdentifier;
- (void)setEntity:(int)arg0;
- (int)entity;

@end
