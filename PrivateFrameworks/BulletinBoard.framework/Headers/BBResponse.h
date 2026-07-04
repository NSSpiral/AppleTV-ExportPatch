/* Runtime dump - BBResponse
 * Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBResponse : NSObject <NSSecureCoding>
{
    BBAssertion * _lifeAssertion;
    id _sendBlock;
    NSString * _bulletinID;
    char _sent;
    NSString * _replyText;
    char _activated;
    NSArray * _lifeAssertions;
    int _actionType;
    NSString * _buttonID;
    NSString * _actionID;
    NSString * _originID;
    NSDictionary * _context;
}

@property (copy, nonatomic) NSString * originID;
@property (copy, nonatomic) NSString * replyText;
@property (copy, nonatomic) NSDictionary * context;
@property (nonatomic) char activated;
@property (copy, nonatomic) NSArray * lifeAssertions;
@property (copy, nonatomic) id sendBlock;
@property (retain, nonatomic) NSString * bulletinID;
@property (nonatomic) int actionType;
@property (copy, nonatomic) NSString * buttonID;
@property (copy, nonatomic) NSString * actionID;

+ (char)supportsSecureCoding;

- (void)dealloc;
- (BBResponse *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSDictionary *)context;
- (void)setContext:(NSDictionary *)arg0;
- (void)send;
- (char)activated;
- (void)setActivated:(char)arg0;
- (id /* block */)sendBlock;
- (void)setBulletinID:(NSString *)arg0;
- (void)setReplyText:(NSString *)arg0;
- (void)setButtonID:(NSString *)arg0;
- (void)setActionID:(NSString *)arg0;
- (void)setOriginID:(NSString *)arg0;
- (NSString *)bulletinID;
- (NSString *)replyText;
- (NSString *)buttonID;
- (NSString *)actionID;
- (NSString *)originID;
- (NSArray *)lifeAssertions;
- (void)setLifeAssertions:(NSArray *)arg0;
- (void)setSendBlock:(id /* block */)arg0;
- (void)setActionType:(int)arg0;
- (int)actionType;

@end
