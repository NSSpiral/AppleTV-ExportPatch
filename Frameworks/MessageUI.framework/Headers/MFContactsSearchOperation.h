/* Runtime dump - MFContactsSearchOperation
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFContactsSearchOperation : NSOperation
{
    void * _addressBook;
    MFContactsSearchManager * _owner;
    NSNumber * _taskID;
    NSString * _text;
    NSOrderedSet * _properties;
    NSString * _sendingAddress;
}

@property (readonly, nonatomic) void * addressBook;
@property (readonly, nonatomic) MFContactsSearchManager * owner;
@property (readonly, nonatomic) NSNumber * taskID;
@property (readonly, nonatomic) NSString * text;
@property (readonly, nonatomic) NSOrderedSet * properties;
@property (readonly, nonatomic) NSString * sendingAddress;
@property (readonly, nonatomic) unsigned int type;

+ (MFContactsSearchOperation *)operationWithAddressBook:(void *)arg0 owner:(MFContactsSearchManager *)arg1 text:(NSString *)arg2 taskID:(NSNumber *)arg3 properties:(NSOrderedSet *)arg4;

- (void)dealloc;
- (unsigned int)type;
- (NSString *)text;
- (NSOrderedSet *)properties;
- (MFContactsSearchManager *)owner;
- (NSNumber *)taskID;
- (NSString *)sendingAddress;
- (void *)addressBook;

@end
