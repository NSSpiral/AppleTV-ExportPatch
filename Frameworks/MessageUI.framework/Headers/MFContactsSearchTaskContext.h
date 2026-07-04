/* Runtime dump - MFContactsSearchTaskContext
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFContactsSearchTaskContext : NSObject
{
    <MFContactsSearchConsumer> * _consumer;
    NSString * _text;
    NSMutableSet * _operations;
    NSMutableSet * _searchQueries;
}

@property (readonly, nonatomic) <MFContactsSearchConsumer> * consumer;
@property (readonly, nonatomic) NSString * text;
@property (readonly, nonatomic) NSMutableSet * operations;
@property (readonly, nonatomic) NSMutableSet * searchQueries;

+ (NSObject *)contextWithConsumer:(<MFContactsSearchConsumer> *)arg0 text:(NSString *)arg1 operations:(NSMutableSet *)arg2 searchQueries:(NSMutableSet *)arg3;

- (NSMutableSet *)searchQueries;
- (void)dealloc;
- (NSString *)text;
- (char)done;
- (NSMutableSet *)operations;
- (<MFContactsSearchConsumer> *)consumer;

@end
