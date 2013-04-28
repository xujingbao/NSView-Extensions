//
//  NSView+Extensions.h
//
//  Created by Elmar Tampe on 28.04.13.
//  Copyright (c) 2013 Elmar Tampe. All rights reserved.
//

@interface NSView (Extensions)

/** Sets the origin.x property of the view to left. */
@property (nonatomic, assign) CGFloat left;

/** Sets the origin.x property of the view to 'right - self.frame.size.width' */
@property (nonatomic, assign) CGFloat right;

/** Sets the origin.y property of the view to 'top - self.frame.size.height' */
@property (nonatomic, assign) CGFloat top;

/** Sets the origin.y property of the view to 'bottom' */
@property (nonatomic, assign) CGFloat bottom;

/** Sets the size.width property of the view to width. */
@property (nonatomic, assign) CGFloat width;

/** Sets the size.height property of the view to height. */
@property (nonatomic, assign) CGFloat height;

/** Sets the size.height property of the view to height. */
@property (nonatomic, assign) CGSize size;

@end