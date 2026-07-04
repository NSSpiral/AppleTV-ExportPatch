/* Runtime dump - IKPlayerStateChangeInfo
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKPlayerStateChangeInfo : NSObject
{
    NSDictionary * _jsonValue;
    int _state;
    int _oldState;
}

@property (copy, nonatomic) NSDictionary * jsonValue;
@property (readonly, nonatomic) int state;
@property (readonly, nonatomic) int oldState;
@property (nonatomic) double duration;
@property (nonatomic) double elapsedTime;

- (NSObject *)objectForKeyedSubscript:(id)arg0;
- (void)setObject:(NSObject *)arg0 forKeyedSubscript:(id)arg1;
- (int)state;
- (double)duration;
- (void)setDuration:(double)arg0;
- (void).cxx_destruct;
- (double)elapsedTime;
- (void)setElapsedTime:(double)arg0;
- (IKPlayerStateChangeInfo *)initWithState:(int)arg0;
- (NSObject *)_stateNameForState:(int)arg0;
- (NSDictionary *)jsonValue;
- (void)setJsonValue:(NSDictionary *)arg0;
- (IKPlayerStateChangeInfo *)initWithState:(int)arg0 oldState:(int)arg1;
- (int)oldState;

@end
