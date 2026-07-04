/* Runtime dump - FBWindowContext
 * Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBWindowContext : NSObject
{
    unsigned int _contextID;
    float _level;
    unsigned int _identifier;
}

@property (readonly, nonatomic) unsigned int identifier;
@property (readonly, nonatomic) float level;

+ (NSObject *)contextWithID:(unsigned int)arg0 level:(float)arg1;
+ (NSString *)contextWithFBSContext:(NSObject *)arg0;

- (FBWindowContext *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (unsigned int)identifier;
- (float)level;
- (FBWindowContext *)initWithContextID:(unsigned int)arg0 level:(float)arg1;

@end
