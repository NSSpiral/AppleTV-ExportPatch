/* Runtime dump - TSCH3DShaderAssignment
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DShaderAssignment : NSObject <TSCH3DShaderStatement>
{
    TSCH3DShaderVariableLinkage * mAssignee;
    struct TSCH3DShaderVariableScopeType mAssigneeScope;
    NSString * mStatement;
    NSArray * mDependees;
    TSCH3DShaderProgram * mProgram;
    struct TSCH3DShaderType mLinkageType;
    struct vector<TSCH3DShaderVariableScopeType, std::__1::allocator<TSCH3DShaderVariableScopeType> > mDependeeScopes;
}

@property (readonly, nonatomic) TSCH3DShaderVariableLinkage * assignee;
@property (readonly, nonatomic) NSArray * dependees;
@property (nonatomic) struct TSCH3DShaderType linkageType;
@property (readonly, nonatomic) NSString * string;
@property (readonly, nonatomic) struct TSCH3DShaderVariableScopeType assigneeScope;
@property (readonly, nonatomic) char isLinked;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (TSCH3DShaderAssignment *)assignmentWithAssignee:(TSCH3DShaderVariableLinkage *)arg0 statement:(struct sqlite3_stmt *)arg1 dependees:(NSArray *)arg2 program:(TSCH3DShaderProgram *)arg3;

- (NSArray *)dependees;
- (TSCH3DShaderAssignment *)initWithAssigneeLinkage:(TSCH3DShaderVariableLinkage *)arg0 statement:(struct sqlite3_stmt *)arg1 dependees:(NSArray *)arg2 program:(TSCH3DShaderProgram *)arg3;
- (void)setLinkageType:(struct TSCH3DShaderType)arg0;
- (void)setAssigneeScopeToType:(struct TSCH3DShaderVariableScopeType)arg0;
- (struct vector<TSCH3DShaderVariableScopeType, std::__1::allocator<TSCH3DShaderVariableScopeType> > *)dependeeScopes;
- (id)varyingAssignmentForLinkage:(id)arg0;
- (id)updateVaryingAssignmentForLinkage:(id)arg0;
- (struct TSCH3DShaderType)dominantDependeeLinkageType;
- (NSObject *)updateDependeesWithPreviousType:(struct TSCH3DShaderType)arg0;
- (NSObject *)resolveDependeesWithPreviousType:(struct TSCH3DShaderType)arg0;
- (char)updateLinkageTypeAddVaryingToAdditions:(id)arg0;
- (NSObject *)expressionStringForType:(struct TSCH3DShaderType)arg0;
- (struct TSCH3DShaderType)linkageType;
- (void)setGeneratedForType:(struct TSCH3DShaderType)arg0;
- (NSObject *)forceLinkageForType:(struct TSCH3DShaderType)arg0;
- (TSCH3DShaderVariableLinkage *)assignee;
- (struct TSCH3DShaderVariableScopeType)assigneeScope;
- (void)dealloc;
- (NSString *)description;
- (NSString *)string;
- (void).cxx_construct;
- (void).cxx_destruct;
- (id)resolve;
- (char)isLinked;

@end
