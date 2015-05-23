/**
 * @page changes_current Changes after the latest release (v1.3)
 *
 * <p> This is the list of changes made after the release of Aspect version
 * 1.3. All entries are signed with the names of the author. </p>
 *
 *
 * <ol>
 * <li> New: There is now a SimulatorAccess::get_statistics_object() function
 * that allows all users of this class to record information in the statistics
 * file, whether they are postprocessors or not.
 * <br>
 * (Wolfgang Bangerth, 2015/05/22)
 *
 * <li> New: ASPECT now also provides a signals mechanism to attach user-defined
 * functions to certain events over the course of a simulation. This allows more
 * fine-grained observation and intervention to user additions. A new section
 * in the manual explains how to extend ASPECT this way.
 * <br>
 * (Wolfgang Bangerth, 2015/05/21)
 *
 * <li> Changed: The free surface handler now detaches internal manifolds
 * for cases when the domain has them, since they are not necessarily a 
 * good description of the geometry when there has been large mesh deformation.
 * <br>
 * (Ian Rose, 2015/05/21)
 *
 * <li> Changed: The documentation for nullspace removal is now more 
 * descriptive of what Aspect is actually doing. 
 * <br>
 * (Ian Rose, 2015/05/21)
 *
 * <li> Changed: The specific heating plugin has a new interface now; it gets
 * the material model inputs and outputs and fills a vector with heating
 * model outputs for the whole cell.
 * <br>
 * (Juliane Dannberg, 2015/05/20)
 *
 * </ol>
 */
