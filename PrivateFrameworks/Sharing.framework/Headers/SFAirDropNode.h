/* Runtime dump - SFAirDropNode
 * Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFAirDropNode : NSObject
{
    struct __SFOperation * _sender;
    char _unknown;
    char _monogram;
    char _supportsPasses;
    char _supportsMixedTypes;
    id _node;
    NSString * _realName;
    UIImage * _displayIcon;
    NSString * _displayName;
    NSString * _secondaryName;
}

@property (retain) id node;
@property (retain) NSString * realName;
@property (retain) UIImage * displayIcon;
@property (retain) NSString * displayName;
@property (retain) NSString * secondaryName;
@property char unknown;
@property char monogram;
@property (readonly) char supportsPasses;
@property (readonly) char supportsMixedTypes;

+ (NSObject *)nodeWithSFNode:(struct __SFNode *)arg0;

- (char)isUnknown;
- (SFAirDropNode *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setMonogram:(char)arg0;
- (SCNNode *)node;
- (void).cxx_destruct;
- (void)setNode:(NSObject *)arg0;
- (NSString *)displayName;
- (void)setDisplayName:(NSString *)arg0;
- (void)updateWithSFNode:(struct __SFNode *)arg0;
- (void)handleOperationCallback:(struct __SFOperation *)arg0 event:(long)arg1 withResults:(NSArray *)arg2;
- (void)setRealName:(NSString *)arg0;
- (void)setUnknown:(char)arg0;
- (void)setSecondaryName:(NSString *)arg0;
- (void)setDisplayIcon:(UIImage *)arg0;
- (void)cancelSend;
- (void)startSendWithSessionID:(NSObject *)arg0 items:(NSArray *)arg1 description:(NSString *)arg2 previewImage:(UIImage *)arg3;
- (NSString *)realName;
- (UIImage *)displayIcon;
- (NSString *)secondaryName;
- (char)isMonogram;
- (char)supportsPasses;
- (char)supportsMixedTypes;

@end
