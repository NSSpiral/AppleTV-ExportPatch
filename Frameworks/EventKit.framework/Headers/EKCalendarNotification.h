/* Runtime dump - EKCalendarNotification
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKCalendarNotification : NSObject <EKIdentityProtocol>
{
    int _type;
    NSString * _title;
    NSString * _name;
    NSString * _emailAddress;
    NSURL * _URI;
    EKObjectID * _objectID;
    struct CGColor * _dotColor;
    char _hiddenFromNotificationCenter;
    char _alerted;
    NSString * _firstName;
    NSString * _lastName;
}

@property (nonatomic) int type;
@property (retain, nonatomic) NSString * title;
@property (retain, nonatomic) NSString * name;
@property (retain, nonatomic) NSString * firstName;
@property (retain, nonatomic) NSString * lastName;
@property (retain, nonatomic) NSString * emailAddress;
@property (retain, nonatomic) NSURL * URI;
@property (retain, nonatomic) EKObjectID * objectID;
@property (nonatomic) struct CGColor * dotColor;
@property (nonatomic) char hiddenFromNotificationCenter;
@property (nonatomic) char alerted;
@property (readonly, nonatomic) char needsAlert;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (char)alerted;
- (char)needsAlert;
- (void)setHiddenFromNotificationCenter:(char)arg0;
- (void)setAlerted:(char)arg0;
- (void)setDotColor:(struct CGColor *)arg0;
- (void)setURI:(NSSet *)arg0;
- (struct CGColor *)dotColor;
- (char)hiddenFromNotificationCenter;
- (NSURL *)URI;
- (void)dealloc;
- (void)setTitle:(NSString *)arg0;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void)setType:(int)arg0;
- (int)type;
- (NSString *)title;
- (EKCalendarNotification *)initWithType:(int)arg0;
- (void)setFirstName:(NSString *)arg0;
- (void)setLastName:(NSString *)arg0;
- (NSString *)firstName;
- (NSString *)lastName;
- (NSString *)emailAddress;
- (void)setEmailAddress:(NSString *)arg0;
- (EKObjectID *)objectID;
- (void)setObjectID:(EKObjectID *)arg0;

@end
