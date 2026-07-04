/* Runtime dump - MSShareStateNotificationString
 * Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSShareStateNotificationString : NSObject
{
    NSString * _sourcePersonID;
    NSString * _title;
    NSString * _body;
}

@property (retain, nonatomic) NSString * sourcePersonID;
@property (retain, nonatomic) NSString * title;
@property (retain, nonatomic) NSString * body;

+ (NSString *)notificationStringsWithTitle:(NSString *)arg0 body:(id /* block */)arg1 sourcePersonID:(NSString *)arg2;

- (void)setTitle:(NSString *)arg0;
- (NSString *)title;
- (NSString *)body;
- (void).cxx_destruct;
- (void)setBody:(NSString *)arg0;
- (MSShareStateNotificationString *)initWithTitle:(NSString *)arg0 body:(id /* block */)arg1 sourcePersonID:(NSString *)arg2;
- (NSString *)sourcePersonID;
- (void)setSourcePersonID:(NSString *)arg0;

@end
