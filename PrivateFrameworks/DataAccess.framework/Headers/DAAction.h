/* Runtime dump - DAAction
 * Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DAAction : NSObject <NSCoding>
{
    int _itemChangeType;
    id _serverId;
    id _changedItem;
    int _changeId;
}

@property (nonatomic) int itemChangeType;
@property (retain, nonatomic) id serverId;
@property (retain, nonatomic) id changedItem;
@property (nonatomic) int changeId;

- (struct ASContact *)contact;
- (struct ASNote *)note;
- (DAAction *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)message;
- (struct ASEvent *)event;
- (void).cxx_destruct;
- (NSObject *)deletedEventID;
- (NSObject *)deletedContactID;
- (void)setItemChangeType:(int)arg0;
- (void)_setChangedItem:(NSObject *)arg0;
- (void)setChangeId:(int)arg0;
- (NSObject *)stringForItemChangeType:(int)arg0;
- (int)changeId;
- (NSObject *)deletedToDoID;
- (struct ASToDo *)toDo;
- (NSObject *)deletedNoteID;
- (void)setServerId:(NSString *)arg0;
- (NSString *)serverId;
- (NSObject *)changedItem;
- (int)itemChangeType;
- (DAAction *)initWithItemChangeType:(int)arg0 changedItem:(NSObject *)arg1 serverId:(NSString *)arg2;

@end
