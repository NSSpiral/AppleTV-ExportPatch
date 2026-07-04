/* Runtime dump - ICEResultQuery
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface ICEResultQuery : NSObject
{
    unsigned long callID;
    struct tagCONNRESULT * result;
    char isQueryAnswered;
}

@property struct tagCONNRESULT * result;
@property unsigned long callID;
@property char isQueryAnswered;

- (void)dealloc;
- (struct tagCONNRESULT *)result;
- (void)setResult:(struct tagCONNRESULT *)arg0;
- (ICEResultQuery *)initWithResult:(struct tagCONNRESULT *)arg0;
- (ICEResultQuery *)initWithCallID:(unsigned long)arg0;
- (unsigned long)callID;
- (void)setCallID:(unsigned long)arg0;
- (char)isQueryAnswered;
- (void)setIsQueryAnswered:(char)arg0;

@end
